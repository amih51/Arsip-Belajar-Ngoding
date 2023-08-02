import pygame

pygame.init()

window_x = 720
window_y = 720

window = pygame.display.set_mode((window_x,window_y))

x = window_x / 2
y = window_y / 2

panjang = 30
lebar = 30

velocity = 0.5

is_run = True
while is_run:
    # pygame.time.delay(10)

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            is_run = False

    keys = pygame.key.get_pressed()
    if keys[pygame.K_LEFT] and x > 0:
        x -= velocity
    if keys[pygame.K_RIGHT] and x < window_x - lebar:
        x += velocity
    if keys[pygame.K_UP] and y > 0:
        y -= velocity
    if keys[pygame.K_DOWN] and y < window_y - panjang:
        y += velocity

    window.fill((216,191,216))
    pygame.draw.rect(window,(225,165,0),(x,y,lebar,panjang))

    pygame.display.update()

pygame.quit( )