# ESP-IDF Project Template with CI, Wokwi Simulation, and Hardware Testing

This is a template project to be used as a reference for ESP-IDF projects with GitHub CI.

![GitHub Workflow Status](https://github.com/wokwi/wokwi-esp-test-template/actions/workflows/ci_workflow.yml/badge.svg)

The purpose of this project is to provide a good **starting point for customers who are developing an application based on Espressif chips and want to run unit or integration tests both in simulation and on real hardware.**

*You can fork and update this project according to your specific needs.*

> Note: As default, the hardware testing job is `disabled`. To enable it, please see the **How to setup (HW)** documents.

## How to setup (Wokwi simulation)

Go to the [Wokwi CI Dashboard](https://wokwi.com/dashboard/ci) and create a new CI token. Then add the token to your GitHub repository secrets as `WOKWI_CLI_TOKEN` (under "Settings" -> "Secrets and Variables" -> "Actions" -> "Repository secrets").

You can also run the tests locally. For more information, please refer to the [Wokwi CI documentation](https://docs.wokwi.com/wokwi-ci/getting-started).

## How to setup (HW)

- [GitHub Action Workflow](docs/ghub_action_workflow.md)
- [GitHub Runner Setup](docs/ghub_runner_setup.md)

## Pre-commit hooks

Since we've baked in some linting in pre-commit-hooks in the GitHub Actions workflow, it's a good idea to make sure the same things run locally on our machines as well.

Begin with installing the python script 'pre-commit' (running it right in the folder may generate the message *"This environment is externally managed ..."*, in that case either open a virtual environment yourself or open an ESP-IDF Terminal which should open a virtual environment *for you*):

`python -m pip install pre-commit`

We then use pre-commit to install 'install-hooks':

`pre-commit install --install-hooks`

At that point any new commit should run the precommit hooks automatically, but you can also run them manually like this:

`pre-commit run --all-files`

## License

The content of this repository is released into the public domain, or [CC0 licensed](LICENSE), at your option.
