

Pod::Spec.new do |spec|

  spec.name         = "Jonas_Category"
  spec.version      = "1.0.1"
  spec.summary      = "UIKit常用分类"
  spec.description  = <<-DESC
			UIKit常用分类,NSObject、UILabel、UIViewController等
                   DESC

  spec.homepage     = "https://www.baidu.com"

  spec.license      = "MIT"
 

  spec.author             = { "Jonas" => "978139383@qq.com" }
 
  spec.platform     = :ios, "9.0"

  spec.source       = { :git => "https://github.com/cx978139383/Frameworks.git", :tag => "#{spec.version}" }

  spec.platform     = :ios,"9.0"
  spec.requires_arc = true 		#是否使用ARC
  spec.source_files  = "Jonas_Category/**"    #OC可以使用类似这样"Classes/**/*.{h,m}"
 
  spec.frameworks = 'UIKit', 'QuartzCore', 'Foundation'    #所需的framework,多个用逗号隔开
  spec.module_name = 'Jonas_Category'                #模块名称
end
