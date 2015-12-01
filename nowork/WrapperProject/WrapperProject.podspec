Pod::Spec.new do |s|
  s.name         = "WrapperProject"
  s.version      = "1.0.0"

  s.platform     = :ios, '7.0'
  s.source       = { :git => "git@github.com/themackworth/WrapperProject.git" }
  s.source_files = 'WrapperProject/*.{h,m}', 'StaticDist/include/StaticDist/*.h'      

  s.vendored_library    = 'StaticDist/libStaticDist.a'
end
