# tasks.json:
https://github.com/microsoft/vscode-cmake-tools/blob/main/docs/build.md#create-a-build-task

>## Create a build task
>You can also define a build task from the VS Code command palette by running the Tasks: Configure Task command.
>
>By choosing the "CMake: build" task, the following task will be created in "${workspaceFolder}/.vscode/tasks.json" file.
```
{
    "version": "2.0.0",
    "tasks": [
        {
            "type": "cmake",
            "label": "CMake: build",
            "command": "build",
            "targets": [
                "ALL_BUILD"
            ],
            "group": "build",
            "problemMatcher": [],
            "detail": "CMake template build task"
        }
    ]
}
```
>The default target is set to "all" target (named ALL_BUILD in some generators). You can modify the "targets" value with a single target or a list of targets that can be built. Here is an example of two customized build tasks in which the name of the task, the list of targets, and the description of the tasks is modified:
```
{
    "version": "2.0.0",
    "tasks": [
        {
            "type": "cmake",
            "label": "Sample CMake build task with single target",
            "command": "build",
            "targets": [
                "prj1"
            ],
            "group": "build",
            "problemMatcher": [],
            "detail": "Build task to build prj1"
        },
        {
            "type": "cmake",
            "label": "Sample CMake build task with multiple targets",
            "command": "build",
            "targets": [
                "prj1",
                "prj2"
            ],
            "group": "build",
            "problemMatcher": [],
            "detail": "Build task to build prj1 and prj2"
        }
    ]
}
```
>Now you can run the build by running Tasks: Run Build Task from the VS Code command pallette. If there are other tasks defined in "tasks.json", the picker will show you the list of build tasks to choose from.

# Launch.json
## CMake: Debug and launch  
https://github.com/microsoft/vscode-cmake-tools/blob/main/docs/debug-launch.md

## Debug using a launch.json file
_This is the config I want! makes top right "run" buttons work._

https://github.com/microsoft/vscode-cmake-tools/blob/main/docs/debug-launch.md#debug-using-a-launchjson-file
