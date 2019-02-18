require "bundler/gem_tasks"
#require "rspec/core/rake_task"
require "rake/extensiontask"

Rake::ExtensionTask.new "cfnv" do |ext|
  ext.lib_dir = "lib/cfnv"
end

#RSpec::Core::RakeTask.new(:spec)

task :default => :spec
