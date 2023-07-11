import pygame
import random

# Set up pygame
pygame.init()

# Set up the display
SCREEN_WIDTH = 800
SCREEN_HEIGHT = 600
screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
pygame.display.set_caption("Pong")

# Set up the game clock
clock = pygame.time.Clock()

# Set up the paddles and ball
PADDLE_WIDTH = 20
PADDLE_HEIGHT = 100
PADDLE_SPEED = 5
BALL_SIZE = 20
BALL_SPEED = 5
player1_pos = (50, SCREEN_HEIGHT // 2 - PADDLE_HEIGHT // 2)
player2_pos = (SCREEN_WIDTH - 50 - PADDLE_WIDTH, SCREEN_HEIGHT // 2 - PADDLE_HEIGHT // 2)
ball_pos = (SCREEN_WIDTH // 2 - BALL_SIZE // 2, SCREEN_HEIGHT // 2 - BALL_SIZE // 2)
ball_direction = [random.choice([-1, 1]), random.uniform(-1, 1)]
player1_score = 0
player2_score = 0

# Draw the paddles and ball
def draw_game(player1_pos, player2_pos, ball_pos, player1_score, player2_score):
    screen.fill((0, 0, 0))
    pygame.draw.rect(screen, (255, 255, 255), pygame.Rect(player1_pos[0], player1_pos[1], PADDLE_WIDTH, PADDLE_HEIGHT))
    pygame.draw.rect(screen, (255, 255, 255), pygame.Rect(player2_pos[0], player2_pos[1], PADDLE_WIDTH, PADDLE_HEIGHT))
    pygame.draw.rect(screen, (255, 255, 255), pygame.Rect(ball_pos[0], ball_pos[1], BALL_SIZE, BALL_SIZE))
    font = pygame.font.SysFont("comicsansms", 30)
    text1 = font.render("Player 1: " + str(player1_score), True, (255, 255, 255))
    text2 = font.render("Player 2: " + str(player2_score), True, (255, 255, 255))
    screen.blit(text1, (50, 50))
    screen.blit(text2, (SCREEN_WIDTH - 200, 50))
    pygame.display.update()

# Run the game loop
def gameLoop():
    global player1_score, player2_score

    game_running = True
    while game_running:
        # Handle events
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                game_running = False

        # Move the paddles
        keys = pygame.key.get_pressed()
        if keys[pygame.K_w]:
            player1_pos = (player1_pos[0], max(player1_pos[1] - PADDLE_SPEED, 0))
        if keys[pygame.K_s]:
            player1_pos = (player1_pos[0], min(player1_pos[1] + PADDLE_SPEED, SCREEN_HEIGHT - PADDLE_HEIGHT))
        if keys[pygame.K_UP]:
            player2_pos = (player2_pos[0], max(player2_pos[1] - PADDLE_SPEED, 0))
        if keys[pygame.K_DOWN]:
            player2_pos = (player2_pos[0], min(player2_pos[1] + PADDLE_SPEED, SCREEN_HEIGHT - PADDLE_HEIGHT))

        # Move the ball
        ball_pos = (ball_pos[0] + int(ball_direction[0] * BALL_SPEED), ball_pos[1] + int(ball_direction[1] * BALL_SPEED))

    # Check for collisions with walls
    if ball_pos[1] < 0 or ball_pos[1] > SCREEN_HEIGHT - BALL_SIZE:
        ball_direction[1] *= -1

    # Check for collisions with paddles
    if ball_pos[0] < player1_pos[0] + PADDLE_WIDTH and ball_pos[1] + BALL_SIZE > player1_pos[1] and ball_pos[1] < player1_pos[1] + PADDLE_HEIGHT:
        ball_direction[0] *= -1
    if ball_pos[0] + BALL_SIZE > player2_pos[0] and ball_pos[1] + BALL_SIZE > player2_pos[1] and ball_pos[1] < player2_pos[1] + PADDLE_HEIGHT:
        ball_direction[0] *= -1

    # Check for scores
    if ball_pos[0] < 0:
        player2_score += 1
        ball_pos = (SCREEN_WIDTH // 2 - BALL_SIZE // 2, SCREEN_HEIGHT // 2 - BALL_SIZE // 2)
        ball_direction = [random.choice([-1, 1]), random.uniform(-1, 1)]
    elif ball_pos[0] + BALL_SIZE > SCREEN_WIDTH:
        player1_score += 1
        ball_pos = (SCREEN_WIDTH // 2 - BALL_SIZE // 2, SCREEN_HEIGHT // 2 - BALL_SIZE // 2)
        ball_direction = [random.choice([-1, 1]), random.uniform(-1, 1)]

    # Draw the game
    draw_game(player1_pos, player2_pos, ball_pos, player1_score, player2_score)

    # Wait for the next frame
    clock.tick(60)

# Clean up pygame
pygame.quit()

