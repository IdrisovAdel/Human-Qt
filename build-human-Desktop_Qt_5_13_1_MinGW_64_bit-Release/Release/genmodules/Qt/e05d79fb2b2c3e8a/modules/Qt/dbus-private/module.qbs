import '../QtModule.qbs' as QtModule

QtModule {
    qtModuleName: "DBus"
    Depends { name: "Qt"; submodules: ["core-private","dbus"]}

    architectures: ["x86_64"]
    targetPlatform: "windows"
    hasLibrary: false
    staticLibsDebug: []
    staticLibsRelease: []
    dynamicLibsDebug: []
    dynamicLibsRelease: []
    linkerFlagsDebug: []
    linkerFlagsRelease: []
    frameworksDebug: []
    frameworksRelease: []
    frameworkPathsDebug: []
    frameworkPathsRelease: []
    libNameForLinkerDebug: undefined
    libNameForLinkerRelease: undefined
    libFilePathDebug: undefined
    libFilePathRelease: undefined
    pluginTypes: []
    moduleConfig: []
    cpp.defines: []
    cpp.includePaths: ["C:/Qt/5.13.1/mingw73_64/include/QtDBus/5.13.1","C:/Qt/5.13.1/mingw73_64/include/QtDBus/5.13.1/QtDBus"]
    cpp.libraryPaths: []
    
}
