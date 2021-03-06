/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcRailingTypeEnum.h"

// TYPE IfcRailingTypeEnum = ENUMERATION OF	(HANDRAIL	,GUARDRAIL	,BALUSTRADE	,USERDEFINED	,NOTDEFINED);
IfcRailingTypeEnum::IfcRailingTypeEnum() {}
IfcRailingTypeEnum::~IfcRailingTypeEnum() {}
shared_ptr<IfcPPObject> IfcRailingTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcRailingTypeEnum> copy_self( new IfcRailingTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcRailingTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCRAILINGTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_HANDRAIL:	stream << ".HANDRAIL."; break;
		case ENUM_GUARDRAIL:	stream << ".GUARDRAIL."; break;
		case ENUM_BALUSTRADE:	stream << ".BALUSTRADE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcRailingTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_HANDRAIL:	return L"HANDRAIL";
		case ENUM_GUARDRAIL:	return L"GUARDRAIL";
		case ENUM_BALUSTRADE:	return L"BALUSTRADE";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcRailingTypeEnum> IfcRailingTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcRailingTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcRailingTypeEnum>(); }
	shared_ptr<IfcRailingTypeEnum> type_object( new IfcRailingTypeEnum() );
	if( boost::iequals( arg, L".HANDRAIL." ) )
	{
		type_object->m_enum = IfcRailingTypeEnum::ENUM_HANDRAIL;
	}
	else if( boost::iequals( arg, L".GUARDRAIL." ) )
	{
		type_object->m_enum = IfcRailingTypeEnum::ENUM_GUARDRAIL;
	}
	else if( boost::iequals( arg, L".BALUSTRADE." ) )
	{
		type_object->m_enum = IfcRailingTypeEnum::ENUM_BALUSTRADE;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcRailingTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcRailingTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
