Drush Update-Rerun
===============

Drush command to re-execute a single module update hook

## Usage

```
Arguments:
 module                                             Module machine name
 version                                            Update hook version

Examples:
 drush update_rerun foo 7001                        Run update 7001 for 'foo' module
 
Aliases: urr
```

## Installation

### Global
#### Using Composer
1. Require `composer/installers`
    ```bash
    composer global require composer/installers
    ```

2. Configure the installer path for drush plugins in `~/.composer/composer.json`
    ```json
    {
      "extra": {
        "installer-paths": {
          "../.drush/plugins/{$name}": ["type:drupal-drush"]
        }
      }
    }
    ```

3. Require `gapple/drush-update-rerun`
    ```bash
    composer global require gapple/drush-update-rerun
    ```

#### Manual Installation
1. [Download the release package](https://github.com/gapple/drush-update-rerun/releases)
2. Unzip the package to `~/.drush/`


### Project
#### Using Composer
1. Require `composer/installers` in your project
    ```bash
    composer require composer/installers
    ```

2. Configure the installer path for drush plugins in your project's `composer.json`
    ```json
    {
      "extra": {
        "installer-paths": {
          "drush/contrib/{$name}": ["type:drupal-drush"]
        }
      }
    }
    ```

3. Require `gapple/drush-update-rerun` in your project
    ```bash
    composer require gapple/drush-update-rerun
    ```

#### Manual Installation
1. [Download the release package](https://github.com/gapple/drush-update-rerun/releases)
2. Unzip the package to the `drush` folder within your project
