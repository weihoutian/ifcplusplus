/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcPhysicalQuantity.h"
class IFCPP_EXPORT IfcPhysicalQuantity;
class IFCPP_EXPORT IfcLabel;
//ENTITY
class IFCPP_EXPORT IfcPhysicalComplexQuantity : public IfcPhysicalQuantity
{ 
public:
	IfcPhysicalComplexQuantity();
	IfcPhysicalComplexQuantity( int id );
	~IfcPhysicalComplexQuantity();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 6; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcPhysicalComplexQuantity"; }
	virtual const std::wstring toString() const;


	// IfcPhysicalQuantity -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>										m_Name;
	//  shared_ptr<IfcText>											m_Description;				//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReferences_inverse;
	//  std::vector<weak_ptr<IfcPhysicalComplexQuantity> >			m_PartOfComplex_inverse;

	// IfcPhysicalComplexQuantity -----------------------------------------------------------
	// attributes:
	std::vector<shared_ptr<IfcPhysicalQuantity> >				m_HasQuantities;
	shared_ptr<IfcLabel>										m_Discrimination;
	shared_ptr<IfcLabel>										m_Quality;					//optional
	shared_ptr<IfcLabel>										m_Usage;					//optional
};

