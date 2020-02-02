# Eight Queens Puzzle Solving Using Genetic Algorithm

Eight queens puzzle deals with placing eight queens that none of them can threaten any other. There is additional information as well as its history can be found on : [Eight queens puzzle - Wikipedia](https://en.wikipedia.org/wiki/Eight_queens_puzzle)

Genetic Algorithm is an evolutionary algorithm inspired by natural processes of evolution in species. It has some parameters named "Probability of Mutation (Pm)", "Probability of Crossover (Pc)", "Population size (PopSize)", and "Maximum Generation (MaxGen)" which allow it to find heuristically good enough solutions to minimize (or maximize based on the problem) the fitness value (FitVal). To get more details, check: [Genetic Algorithm - Wikipedia](https://en.wikipedia.org/wiki/Genetic_algorithm)

# Abridged details

The eight queens puzzle is modeled by an array of eight integers representing eight rows of a chessboard as the chromosome or the genotype. Each element of the array represents the row that a queen resides on the board. In this model, surely there are no queens, threatening each other vertically. But, for horizontal and diagonal collisions, we have to check duplicated numbers in the array and check a simple condition written below, respectively.

![equation](http://latex.codecogs.com/gif.latex?|ValueOfChromosomeAt[i]-ValueOfChromosomeAt[j]|==|i-j|)

The summation of these two conflicts forms the fitness value of the optimization (minimization) problem, which we want to use the Genetic Algorithm (GA) to solve it.

The UI built by the Qt framework for C++, and there are some controls for adjusting the GA parameters, and there is a line reporting the best-found fitness value for the puzzle. In the case of finding a correct solution, the positions of queens are will be shown on the chessboard without any red border. Also, the FitVal will be shown in green(Fig. 2). By contrast, in the case of failure, the FitVal will be shown in red (Fig.1), and the queens threatening each other will be depicted with red borders. Furthermore, under the "History" part, parameters and the resulted FitVal are being shown.

# Screenshots
| ![Failure Screenshot](https://raw.githubusercontent.com/mirerfangheibi/Qt-Eight-Queens-GA/master/Screenshots/Failure.png )Fig.1: Genetic Algorithm could not find a solution | ![Success Screenshot](https://raw.githubusercontent.com/mirerfangheibi/Qt-Eight-Queens-GA/master/Screenshots/Success.png)Fig.2: Genetic Algorithm found a solution |
|--|--|



# Credits
The queen icon drove from artwork by [Smashicons](https://www.flaticon.com/authors/smashicons) from [www.flaticon.com](http://www.flaticon.com/). The original icon: [link](https://www.flaticon.com/free-icon/chess_140368)
