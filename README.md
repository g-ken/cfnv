# CFnv

This gem is fnv1 and fnva1 hash algorithm C-Extension .

This one is 500 times faster than native ruby code .

![gruff](https://user-images.githubusercontent.com/40693088/53032236-cfb34980-34b1-11e9-8a8c-fdcd92d86907.png "実行速度")


## Installation

Add this line to your application's Gemfile:

```ruby
gem 'cfnv'
```

And then execute:

    $ bundle

Or install it yourself as:

    $ gem install cfnv

## Usage

```ruby
cfnv = CFnv.new
```

fnv132

```ruby
cfnv.fnv132(String)
```

fnv132

```ruby
cfnv.fnv1a32(String)
```

fnv64

```ruby
cfnv.fnv164(String)
```

fnv1a64

```ruby
cfnv.fnv1a64(String)
```

## Development

After checking out the repo, run `bin/setup` to install dependencies. Then, run `rake spec` to run the tests. You can also run `bin/console` for an interactive prompt that will allow you to experiment.

To install this gem onto your local machine, run `bundle exec rake install`. To release a new version, update the version number in `version.rb`, and then run `bundle exec rake release`, which will create a git tag for the version, push git commits and tags, and push the `.gem` file to [rubygems.org](https://rubygems.org).

## Contributing

Bug reports and pull requests are welcome on GitHub at https://github.com/[USERNAME]/c_fnv. This project is intended to be a safe, welcoming space for collaboration, and contributors are expected to adhere to the [Contributor Covenant](http://contributor-covenant.org) code of conduct.

## License

The gem is available as open source under the terms of the [MIT License](https://opensource.org/licenses/MIT).

## Code of Conduct

Everyone interacting in the CFnv project’s codebases, issue trackers, chat rooms and mailing lists is expected to follow the [code of conduct](https://github.com/[USERNAME]/c_fnv/blob/master/CODE_OF_CONDUCT.md).

# cfnv
