# Mabrains RISC-V Linux Capable SOC on Skywaters 130nm

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](https://opensource.org/licenses/Apache-2.0) [![UPRJ_CI](https://github.com/efabless/caravel_project_example/actions/workflows/user_project_ci.yml/badge.svg)](https://github.com/efabless/caravel_project_example/actions/workflows/user_project_ci.yml) [![Caravel Build](https://github.com/efabless/caravel_project_example/actions/workflows/caravel_build.yml/badge.svg)](https://github.com/efabless/caravel_project_example/actions/workflows/caravel_build.yml)


## Introduction
This project is the realization of an Open Source implementation for RISC-V that is linux capable.

NOTE: THIS PROJECT WILL NOT GO INTO MPW3.

## Cores Investigated
The following cores were investigated:


## Implemented Core

We have choosen the following core for the following reasons:


| Core | Configuration | RTL Link | Number of Gates (No Memory) | Core Synthesized Size (No Memory) |
|-----------------------|--------|--------|---------------|---------------|
| [Rocket-Chip](https://github.com/mabrains/rocket-chip) | class DefaultRV32Config extends Config(new WithRV32 ++ new DefaultConfig) | [RTL](cores/rocket-chip/freechips.rocketchip.system.DefaultRV32Config.v) | 22335 | 0.21 mm^2 |
| [RVsoc](https://www.arch.cs.titech.ac.jp/wk/rvsoc/doku.php) | Updated code to make it FPGA independant | [RTL](cores/RVsoc/src/rvcorem.v) | 32656 | 0.28 mm^2 |
| [Birisc (ultra embedded)](https://github.com/ultraembedded/biriscv) | ... | [RTL](https://github.com/ultraembedded/biriscv/tree/master/src/core) | 62394 | 0.6 mm^2
| [openpiton](https://github.com/PrincetonUniversity/openpiton) | ... | [RTL](https://github.com/PrincetonUniversity/openpiton/tree/openpiton/piton/design/chip) | Not Tested | Not Tested





## Caravel Usage Documentation

Refer to [README](docs/source/index.rst) for this sample project documentation. 

## Contributors
Thanke for all the contributions of the Mabrains Interns:
* Rawan Adel
* Moataz Alaa

