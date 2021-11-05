from os import system


number_of_tries = 5         #the number of tries
word = 'bunny'              #word that user has to guess
used = []                   #letters which user used

letters = []                #here correct letters will be saved

def find(word, letter):     #this function is supposed to find on which index/indexes the letter/s is/are in word
    index = []
    for i, ltr in enumerate(word):
        if letter == ltr:
            index.append(i)

    return index

def state_of_game():        #function which prints user's progress
    print()
    print("".join(letters))
    print("Tries left:", number_of_tries)
    print("Used letters:", used)
    print()


for _ in word:              #it makes a space for letters for the word
    letters.append("_")

while True:                 
    letter = input("Enter the letter: ")    
    used.append(letter)     #user is guessing a letter

    found = find(word, letter)

    if len(found) == 0:     #if user guesses wrong, prints a text and decreases numbers of tries
        print("There is no such letter.")
        number_of_tries = number_of_tries -1
        

        if number_of_tries == 0:    #if there is 0 tries left, user lost and game ends
            print("You lost.g")
            print("The word was:",word)
            system.exit(0)

    else: 
        for i in found:     #prints letters which user guessed correctly
            letters[i] = letter

        if "".join(letters) == word:    #if user guessed the word, user won and the game ends
            print("You won!")
            print("The word was:",word)
            system.exit(0)

    state_of_game()         #prints progress of the game
