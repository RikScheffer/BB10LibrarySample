#include "MyBanner.hpp"

namespace bb {
namespace cascades {
namespace my {


MyBanner::MyBanner(bb::cascades::Container *container): bb::cascades::CustomControl()
{
	Container *rootContainer = Container::create()
	        .background(Color::Blue)
	        .preferredWidth(400)
	        .preferredHeight(250);

	    mTextField = TextField::create()
	        .text("Default text.")
	        .horizontal(HorizontalAlignment::Center)
	        .vertical(VerticalAlignment::Center)
	        .preferredWidth(350);

	    rootContainer->add(mTextField);

	    setRoot(rootContainer);
}

MyBanner::~MyBanner()
{

}

} // namespace my
} // namespace cascades
} // namespace bb
