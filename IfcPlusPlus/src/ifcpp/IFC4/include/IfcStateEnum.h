/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcStateEnum = ENUMERATION OF	(READWRITE	,READONLY	,LOCKED	,READWRITELOCKED	,READONLYLOCKED);
class IFCPP_EXPORT IfcStateEnum : virtual public IfcPPObject
{
public:
	enum IfcStateEnumEnum
	{
		ENUM_READWRITE,
		ENUM_READONLY,
		ENUM_LOCKED,
		ENUM_READWRITELOCKED,
		ENUM_READONLYLOCKED
	};

	IfcStateEnum();
	IfcStateEnum( IfcStateEnumEnum e ) { m_enum = e; }
	~IfcStateEnum();
	virtual const char* className() const { return "IfcStateEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcStateEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcStateEnumEnum m_enum;
};

