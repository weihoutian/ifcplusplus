/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcLightDistributionDataSourceSelect.h"
#include "IfcObjectReferenceSelect.h"
#include "IfcResourceObjectSelect.h"
class IFCPP_EXPORT IfcURIReference;
class IFCPP_EXPORT IfcIdentifier;
class IFCPP_EXPORT IfcLabel;
class IFCPP_EXPORT IfcExternalReferenceRelationship;
//ENTITY
class IFCPP_EXPORT IfcExternalReference : virtual public IfcLightDistributionDataSourceSelect, virtual public IfcObjectReferenceSelect, virtual public IfcResourceObjectSelect, public IfcPPEntity
{ 
public:
	IfcExternalReference();
	IfcExternalReference( int id );
	~IfcExternalReference();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 3; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcExternalReference"; }
	virtual const std::wstring toString() const;


	// IfcExternalReference -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcURIReference>									m_Location;					//optional
	shared_ptr<IfcIdentifier>									m_Identification;			//optional
	shared_ptr<IfcLabel>										m_Name;						//optional
	// inverse attributes:
	std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_ExternalReferenceForResources_inverse;
};

