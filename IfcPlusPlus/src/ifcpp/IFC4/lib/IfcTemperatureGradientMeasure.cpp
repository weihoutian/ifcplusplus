/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcTemperatureGradientMeasure.h"

// TYPE IfcTemperatureGradientMeasure = REAL;
IfcTemperatureGradientMeasure::IfcTemperatureGradientMeasure() {}
IfcTemperatureGradientMeasure::IfcTemperatureGradientMeasure( double value ) { m_value = value; }
IfcTemperatureGradientMeasure::~IfcTemperatureGradientMeasure() {}
shared_ptr<IfcPPObject> IfcTemperatureGradientMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcTemperatureGradientMeasure> copy_self( new IfcTemperatureGradientMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcTemperatureGradientMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTEMPERATUREGRADIENTMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcTemperatureGradientMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcTemperatureGradientMeasure> IfcTemperatureGradientMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcTemperatureGradientMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcTemperatureGradientMeasure>(); }
	shared_ptr<IfcTemperatureGradientMeasure> type_object( new IfcTemperatureGradientMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
