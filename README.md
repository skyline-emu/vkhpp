## [Vulkan-Hpp](https://github.com/KhronosGroup/Vulkan-Hpp/) for [Skyline](https://github.com/skyline-emu/skyline)
We ran into a rather unique problem with using [Vulkan-Hpp](https://github.com/KhronosGroup/Vulkan-Hpp/) in [Skyline](https://github.com/skyline-emu/skyline), that being Android Studio not being able to support analysing files beyond a certain length or size without manually overriding some settings so it could.
We did not want this to affect other developers and make setup as easy as possible, so we modified the existing [Vulkan-Hpp](https://github.com/KhronosGroup/Vulkan-Hpp/) generator to break up the files in a way that would make individual files smaller and therefore not breaking the file size limits.

We have also packaged in `git.patch` which is the `git diff` of the changes made to [Vulkan-Hpp](https://github.com/KhronosGroup/Vulkan-Hpp/). It can be used to recreate the generator from the source repository at https://github.com/KhronosGroup/Vulkan-Hpp/.
