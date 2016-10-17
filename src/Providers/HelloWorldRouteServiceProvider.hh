<?hh //strict

    namespace test\Providers;


    use Plenty\Plugin\RouteServiceProvider;
    use Plenty\Plugin\Routing\Router;

    class HelloWorldRouteServiceProvider extends RouteServiceProvider
    {
        public function map(Router $router):void
        {
          $router->get('test','test\Controllers\ContentController@sayHello');
        }
    }
