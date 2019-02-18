require "bundler/gem_tasks"
require "rspec/core/rake_task"
require "rake/extensiontask"

Rake::ExtensionTask.new "c_fnv" do |ext|
  ext.lib_dir = "lib/c_fnv"
end

RSpec::Core::RakeTask.new(:spec)

task :default => :spec
