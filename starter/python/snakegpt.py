import pygame
import time
import random

pygame.init()

# Set up the display
SCREEN_WIDTH = 800
SCREEN_HEIGHT = 600
game_display = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
pygame.display.set_caption('Snake Game')

# Set up the colors
white = (255, 255, 255)
black = (0, 0, 0)
red = (213, 50, 80)
green = (0, 255, 0)

# Set up the clock
clock = pygame.time.Clock()

# Set up the font
font_style = pygame.font.SysFont(None, 30)

def message(msg, color):
    """
    Displays a message in the center of the screen.
    """
    text = font_style.render(msg, True, color)
    game_display.blit(text, [SCREEN_WIDTH / 6, SCREEN_HEIGHT / 3])

def gameLoop():
    # Set up the initial position of the snake
    lead_x = SCREEN_WIDTH / 2
    lead_y = SCREEN_HEIGHT / 2
    block_size = 10

    lead_x_change = 0
    lead_y_change = 0

    # Set up the initial position of the food
    food_x = round(random.randrange(0, SCREEN_WIDTH - block_size) / 10.0) * 10.0
    food_y = round(random.randrange(0, SCREEN_HEIGHT - block_size) / 10.0) * 10.0

    game_exit = False
    game_over = False

    while not game_exit:

        while game_over == True:
            game_display.fill(white)
            message("You lost! Press C-Play Again or Q-Quit", red)
            pygame.display.update()

            for event in pygame.event.get():
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_q:
                        game_exit = True
                        game_over = False
                    if event.key == pygame.K_c:
                        gameLoop()

        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                game_exit = True
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_LEFT:
                    lead_x_change = -block_size
                    lead_y_change = 0
                elif event.key == pygame.K_RIGHT:
                    lead_x_change = block_size
                    lead_y_change = 0
                elif event.key == pygame.K_UP:
                    lead_y_change = -block_size
                    lead_x_change = 0
                elif event.key == pygame.K_DOWN:
                    lead_y_change = block_size
                    lead_x_change = 0

        # Check if the snake hits the boundaries
        if lead_x >= SCREEN_WIDTH or lead_x < 0 or lead_y >= SCREEN_HEIGHT or lead_y < 0:
            game_over = True

        # Update the position of the snake
        lead_x += lead_x_change
        lead_y += lead_y_change

        # Fill the background with white color
        game_display.fill(white)

        # Draw the food
        pygame.draw.rect(game_display, green, [food_x, food_y, block_size, block_size])

        # Draw the snake
        pygame.draw.rect(game_display, black, [lead_x, lead_y, block_size, block_size])

        pygame.display.update()

        # Check if the snake eats the food
        if lead_x == food_x and lead_y == food_y:
            food_x = round(random.randrange(0, SCREEN_WIDTH - block_size) / 10.0) * 10.0
            food_y = round(random.randrange(0, SCREEN_HEIGHT - block_size) / 10.0) * 10.0

    # Set the speed of the game
    clock.tick(20)

# Quit the game
pygame.quit()
quit()

