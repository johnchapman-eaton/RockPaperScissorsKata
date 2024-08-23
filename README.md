# RockPaperScissorsKata
![image](https://github.com/johnchapman-eaton/RockPaperScissorsKata/assets/122990021/090eff4f-6d14-4160-9883-61acde2f36dc)

## Rules
The rules of rock paper scissors are fairly simple:
1. Scissors/Rock: Player1 Loses
2. Scissors/Paper: Player1 Wins
3. Scissors/Scissors: Tie
4. Paper/Rock: Player1 Wins
5. Paper/Scissors: Player1 Loses
6. Paper/Paper: Tie
7. Rock/Paper: Player1 Loses
8. Rock/Scissors: Player1 Wins
9. Rock/Rock: Tie

This Code Kata is to implement a modules that meets these rules.

## Setup
This codespace environment should be setup properly (via vscode devcontainers - see the [devcontainer.json file](./.devcontainer/devcontainer.json)). This includes the ability to debug, check code coverage, and calculate complexity.

If you want to get the tooling installed locally, you have 2 options:

1. Use the SE team's `se-tup` utility ([here](https://github.com/etn-electrical/se-tup)), and run `se-tup install gtest`
1. Manually get the following programs installed (this snippet shows using `apt` but some are fetchable via `snap` or other means):
```bash
sudo apt install gcovr pmccabe cmake gcc g++ gdb
```

## Build/Run
To build and run:
```
 cmake -S . -B build && cmake --build build --target run-tests
```

## Example Answers
There is a branch with a set of examples named `solution`.
