Pod::Spec.new do |s|
  s.name         = "WrapperProject"
  s.version      = "1.0.0"

  s.platform     = :ios, '8.0'
  s.source       = { :git => "git@github.com/themackworth/WrapperProject.git" }
  s.source_files = 'WrapperProject/*.{h,m}', 'StaticDist/include/StaticDist/*.h', 'StaticDist/include/Jumio/*.h'      
#s.pod_target_xcconfig = { 'OTHER_LDFLAGS' => '-ObjC' }

  s.vendored_framework    = 'JumioCore.framework', 'StaticDistFramework.framework'
end
