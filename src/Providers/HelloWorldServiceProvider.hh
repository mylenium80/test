<?hh //strict

    namespace test\Providers;


    use Plenty\Plugin\ServiceProvider;

    class HelloWorldServiceProvider extends ServiceProvider
    {

        /**
         * Register the service provider.
         */

        public function register():void
        {
          $this->getApplication()->register(HelloWorldRouteServiceProvider::class);
        }
    }
