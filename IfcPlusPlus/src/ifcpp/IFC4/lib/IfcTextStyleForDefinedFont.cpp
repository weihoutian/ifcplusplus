/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcColour.h"
#include "ifcpp/IFC4/include/IfcTextStyleForDefinedFont.h"

// ENTITY IfcTextStyleForDefinedFont 
IfcTextStyleForDefinedFont::IfcTextStyleForDefinedFont() {}
IfcTextStyleForDefinedFont::IfcTextStyleForDefinedFont( int id ) { m_entity_id = id; }
IfcTextStyleForDefinedFont::~IfcTextStyleForDefinedFont() {}
shared_ptr<IfcPPObject> IfcTextStyleForDefinedFont::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcTextStyleForDefinedFont> copy_self( new IfcTextStyleForDefinedFont() );
	if( m_Colour ) { copy_self->m_Colour = dynamic_pointer_cast<IfcColour>( m_Colour->getDeepCopy(options) ); }
	if( m_BackgroundColour ) { copy_self->m_BackgroundColour = dynamic_pointer_cast<IfcColour>( m_BackgroundColour->getDeepCopy(options) ); }
	return copy_self;
}
void IfcTextStyleForDefinedFont::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCTEXTSTYLEFORDEFINEDFONT" << "(";
	if( m_Colour ) { m_Colour->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_BackgroundColour ) { m_BackgroundColour->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IfcTextStyleForDefinedFont::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcTextStyleForDefinedFont::toString() const { return L"IfcTextStyleForDefinedFont"; }
void IfcTextStyleForDefinedFont::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcTextStyleForDefinedFont, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Colour = IfcColour::createObjectFromSTEP( args[0], map );
	m_BackgroundColour = IfcColour::createObjectFromSTEP( args[1], map );
}
void IfcTextStyleForDefinedFont::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcPresentationItem::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Colour", m_Colour ) );
	vec_attributes.push_back( std::make_pair( "BackgroundColour", m_BackgroundColour ) );
}
void IfcTextStyleForDefinedFont::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcPresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcTextStyleForDefinedFont::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcPresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcTextStyleForDefinedFont::unlinkFromInverseCounterparts()
{
	IfcPresentationItem::unlinkFromInverseCounterparts();
}
