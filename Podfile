source 'https://github.com/CocoaPods/Specs.git'

platform :osx, '10.10'
use_frameworks!

workspace 'mbam-mac-objc'

def podSparkle
    pod 'Sparkle'
end

# ***********************************************************************
# CommonKit Framework

target 'CommonKit' do
    project 'CommonKit/CommonKit.xcodeproj'
    podLog4Swift
    podSwinject
    podAlamofire
end