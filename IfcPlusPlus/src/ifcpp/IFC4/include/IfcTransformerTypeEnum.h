/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcTransformerTypeEnum = ENUMERATION OF	(CURRENT	,FREQUENCY	,INVERTER	,RECTIFIER	,VOLTAGE	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcTransformerTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcTransformerTypeEnumEnum
	{
		ENUM_CURRENT,
		ENUM_FREQUENCY,
		ENUM_INVERTER,
		ENUM_RECTIFIER,
		ENUM_VOLTAGE,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcTransformerTypeEnum();
	IfcTransformerTypeEnum( IfcTransformerTypeEnumEnum e ) { m_enum = e; }
	~IfcTransformerTypeEnum();
	virtual const char* className() const { return "IfcTransformerTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcTransformerTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcTransformerTypeEnumEnum m_enum;
};

