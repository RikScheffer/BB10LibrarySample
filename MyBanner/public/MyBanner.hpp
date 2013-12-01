/*!
 * @copyright
 * Copyright Research In Motion Limited, 2012-2013
 * Research In Motion Limited. All rights reserved.
 */

#ifndef BB_CASCADES_MY_MYBANNER_HPP
#define BB_CASCADES_MY_MYBANNER_HPP

#include "Global.hpp"
#include <bb/cascades/CustomControl>
#include <bb/cascades/Container>
#include <bb/cascades/TextField>

namespace bb {
namespace cascades {
namespace my {

class BB_CASCADES_MY_EXPORT MyBanner: public bb::cascades::CustomControl
{
	Q_OBJECT

public:

	MyBanner(bb::cascades::Container *container = 0);
	virtual ~MyBanner();

	TextField *mTextField;


};

} // namespace my
} // namespace cascades
} // namespace bb

QML_DECLARE_TYPE(bb::cascades::my::MyBanner)

#endif // BB_CASCADES_MY_MYBANNER_HPP
