
# Steps:
```rust
// from Guide: [2024 C++ and CMake Setup in Visual Studio Code: A Step-by-Step Guide](https://youtu.be/4U-lnfxY2U0)

fn openCommandPallet(){
  open( View -> Command Palette ) || type("Ctrl+Shift+P")
}

/* Steps: */
// 1. Scan for Kits
openCommandPallet()
type("CMake: Scan for Kits")

// 2. Select a Kit
openCommandPallet()
type("CMake: Select a Kit")

// 3. make CMake Status bar visible
// Cmake › Options: Status Bar Visibility
Click(Manage -> Settings) # on bottom left, Gear icon
type("cmake status bar")
drop_down( Cmake › Options: Status Bar Visibility, visible )

// 4. Run project
/*
on bottom of VSCode the CMake Panel should be visible.
Click "▶️" run button,
which will show on hover "Launch the selected target in the terminal window".
*/
```
