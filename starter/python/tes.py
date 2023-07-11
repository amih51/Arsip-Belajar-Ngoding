import pygame
import random

# Inisialisasi Pygame
pygame.init()

# Warna
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
RED = (255, 0, 0)

# Ukuran layar
SCREEN_WIDTH = 800
SCREEN_HEIGHT = 600

# Membuat layar
screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
pygame.display.set_caption("Snake Game")

# Variabel yang diperlukan untuk permainan
block_size = 10
clock = pygame.time.Clock()
font = pygame.font.SysFont(None, 25)

# Fungsi untuk menampilkan pesan pada layar
def message_to_screen(msg, color):
    screen_text = font.render(msg, True, color)
    screen.blit(screen_text, [SCREEN_WIDTH/6, SCREEN_HEIGHT/3])

# Fungsi untuk menjalankan game
def gameLoop():
    gameExit = False
    gameOver = False

    # Koordinat kepala ular
    lead_x = SCREEN_WIDTH / 2
    lead_y = SCREEN_HEIGHT / 2

    # Pergerakan awal ular
    lead_x_change = 0
    lead_y_change = 0

    # Makanan ular
    food_x = round(random.randrange(0, SCREEN_WIDTH - block_size) / 10.0) * 10.0
    food_y = round(random.randrange(0, SCREEN_HEIGHT - block_size) / 10.0) * 10.0

    while not gameExit:

        while gameOver == True:
            screen.fill(WHITE)
            message_to_screen("Game over, press C to play again or Q to quit", RED)
            pygame.display.update()

            # Tombol untuk memulai permainan lagi atau keluar dari permainan
            for event in pygame.event.get():
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_q:
                        gameExit = True
                        gameOver = False
                    if event.key == pygame.K_c:
                        gameLoop()

        # Mengatur pergerakan ular
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                gameExit = True
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

        # Jika ular mencapai batas layar
        if lead_x >= SCREEN_WIDTH or lead_x < 0 or lead_y >= SCREEN_HEIGHT or lead_y < 0:
            gameOver = True

        # Menggerakkan ular
        lead_x += lead_x_change
        lead_y += lead_y_change

        # Menampilkan ular dan makanan pada layar
        screen.fill(WHITE)
        pygame.draw.rect(screen, BLACK, [food_x, food_y, block_size, block_size])
        pygame.draw.rect(screen, RED, [lead_x, lead_y, block_size, block_size])
        pygame.display.update()

        # Jika ular memakan makanan
        if lead_x == food_x and lead_y == food_y:
            food_x = round(random.randrange(0, SCREEN_WIDTH - block_size) / 10.0) * 10.0
            food_y = round(random.randrange(0, SCREEN_HEIGHT - block_size) / 10.0) * 10.0

    clock.tick(20)  # Menentukan kecepatan ular

pygame.quit()
quit()
gameLoop()

