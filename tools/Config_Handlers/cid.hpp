/*
 * This code was generated by the XML Schema Compiler.
 *
 * Changes made to this code will most likely be overwritten
 * when the handlers are recompiled.
 *
 * If you find errors or feel that there are bugfixes to be made,
 * please report this to the XSC project at
 * https://github.com/DOCGroup/XSC
 */
#ifndef CID_HPP
#define CID_HPP

#include "XSC_XML_Handlers_Export.h"
// Forward declarations.
namespace DAnCE
{
  namespace Config_Handlers
  {
    class ComponentPackageReference;
    class SubcomponentInstantiationDescription;
    class SubcomponentPropertyReference;
    class AssemblyPropertyMapping;
    class LocalityKind;
    class Locality;
    class ComponentAssemblyDescription;
    class MonolithicImplementationDescription;
    class ComponentImplementationDescription;
    class ConnectorImplementationDescription;
  }
}

#include <memory>
#include <string>
#include <list>
#include "ace/XML_Utils/XMLSchema/Types.hpp"
#include "ace/XML_Utils/XMLSchema/id_map.hpp"
#include "ace/Refcounted_Auto_Ptr.h"
#include "ace/Null_Mutex.h"
#include "ace/ace_wchar.h"

#include "Basic_Deployment_Data.hpp"

#include "ccd.hpp"

#include "iad.hpp"

#include "pcd.hpp"

namespace DAnCE
{
  namespace Config_Handlers
  {
    class XSC_XML_Handlers_Export ComponentPackageReference : public ::XSCRT::Type
    {
      typedef ::XSCRT::Type Base;

      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::ComponentPackageReference, ACE_Null_Mutex> _ptr;

      // requiredUUID
      public:
      bool requiredUUID_p () const;
      ::XMLSchema::string<ACE_TCHAR> const& requiredUUID () const;
      void requiredUUID (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef std::auto_ptr< ::XMLSchema::string<ACE_TCHAR> > requiredUUID_auto_ptr_type;
      requiredUUID_auto_ptr_type requiredUUID_;

      // requiredName
      public:
      bool requiredName_p () const;
      ::XMLSchema::string<ACE_TCHAR> const& requiredName () const;
      void requiredName (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef std::auto_ptr< ::XMLSchema::string<ACE_TCHAR> > requiredName_auto_ptr_type;
      requiredName_auto_ptr_type requiredName_;

      // requiredType
      public:
      ::DAnCE::Config_Handlers::ComponentInterfaceDescription const& requiredType () const;
      void requiredType (::DAnCE::Config_Handlers::ComponentInterfaceDescription const& );

      protected:
      typedef std::auto_ptr< ::DAnCE::Config_Handlers::ComponentInterfaceDescription > requiredType_auto_ptr_type;
      requiredType_auto_ptr_type requiredType_;

      public:
      ComponentPackageReference (::DAnCE::Config_Handlers::ComponentInterfaceDescription const& requiredType__);

      explicit ComponentPackageReference (::XSCRT::XML::Element<ACE_TCHAR> const&);
      ComponentPackageReference (ComponentPackageReference const& s);
      ComponentPackageReference& operator= (ComponentPackageReference const& s);
    };


    class XSC_XML_Handlers_Export SubcomponentInstantiationDescription : public ::XSCRT::Type
    {
      typedef ::XSCRT::Type Base;

      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::SubcomponentInstantiationDescription, ACE_Null_Mutex> _ptr;

      // name
      public:
      ::XMLSchema::string<ACE_TCHAR> const& name () const;
      void name (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef std::auto_ptr< ::XMLSchema::string<ACE_TCHAR> > name_auto_ptr_type;
      name_auto_ptr_type name_;

      // basePackage
      public:
      bool basePackage_p () const;
      ::DAnCE::Config_Handlers::ComponentPackageDescription const& basePackage () const;
      void basePackage (::DAnCE::Config_Handlers::ComponentPackageDescription const& );

      protected:
      typedef std::auto_ptr< ::DAnCE::Config_Handlers::ComponentPackageDescription > basePackage_auto_ptr_type;
      basePackage_auto_ptr_type basePackage_;

      // specializedConfig
      public:
      bool specializedConfig_p () const;
      ::DAnCE::Config_Handlers::PackageConfiguration const& specializedConfig () const;
      void specializedConfig (::DAnCE::Config_Handlers::PackageConfiguration const& );

      protected:
      typedef std::auto_ptr< ::DAnCE::Config_Handlers::PackageConfiguration > specializedConfig_auto_ptr_type;
      specializedConfig_auto_ptr_type specializedConfig_;

      // selectRequirement
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Requirement, ACE_Null_Mutex> selectRequirement_value_type;
      typedef std::list<selectRequirement_value_type> selectRequirement_container_type;
      typedef selectRequirement_container_type::iterator selectRequirement_iterator;
      typedef selectRequirement_container_type::const_iterator selectRequirement_const_iterator;
      selectRequirement_iterator begin_selectRequirement ();
      selectRequirement_iterator end_selectRequirement ();
      selectRequirement_const_iterator begin_selectRequirement () const;
      selectRequirement_const_iterator end_selectRequirement () const;
      void add_selectRequirement (selectRequirement_value_type const&);
      size_t count_selectRequirement () const;

      protected:
      selectRequirement_container_type selectRequirement_;

      // configProperty
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Property, ACE_Null_Mutex> configProperty_value_type;
      typedef std::list<configProperty_value_type> configProperty_container_type;
      typedef configProperty_container_type::iterator configProperty_iterator;
      typedef configProperty_container_type::const_iterator configProperty_const_iterator;
      configProperty_iterator begin_configProperty ();
      configProperty_iterator end_configProperty ();
      configProperty_const_iterator begin_configProperty () const;
      configProperty_const_iterator end_configProperty () const;
      void add_configProperty (configProperty_value_type const&);
      size_t count_configProperty () const;

      protected:
      configProperty_container_type configProperty_;

      // referencedPackage
      public:
      bool referencedPackage_p () const;
      ::DAnCE::Config_Handlers::ComponentPackageReference const& referencedPackage () const;
      void referencedPackage (::DAnCE::Config_Handlers::ComponentPackageReference const& );

      protected:
      typedef std::auto_ptr< ::DAnCE::Config_Handlers::ComponentPackageReference > referencedPackage_auto_ptr_type;
      referencedPackage_auto_ptr_type referencedPackage_;

      // importedPackage
      public:
      bool importedPackage_p () const;
      ::DAnCE::Config_Handlers::ComponentPackageImport const& importedPackage () const;
      void importedPackage (::DAnCE::Config_Handlers::ComponentPackageImport const& );

      protected:
      typedef std::auto_ptr< ::DAnCE::Config_Handlers::ComponentPackageImport > importedPackage_auto_ptr_type;
      importedPackage_auto_ptr_type importedPackage_;

      // id
      public:
      bool id_p () const;
      ::XMLSchema::ID<ACE_TCHAR> const& id () const;
      ::XMLSchema::ID<ACE_TCHAR>& id ();
      void id (::XMLSchema::ID<ACE_TCHAR> const& );

      protected:
      typedef std::auto_ptr< ::XMLSchema::ID<ACE_TCHAR> > id_auto_ptr_type;
      id_auto_ptr_type id_;

      public:
      SubcomponentInstantiationDescription (::XMLSchema::string<ACE_TCHAR> const& name__);

      explicit SubcomponentInstantiationDescription (::XSCRT::XML::Element<ACE_TCHAR> const&);
      SubcomponentInstantiationDescription (SubcomponentInstantiationDescription const& s);
      SubcomponentInstantiationDescription& operator= (SubcomponentInstantiationDescription const& s);
    };


    class XSC_XML_Handlers_Export SubcomponentPropertyReference : public ::XSCRT::Type
    {
      typedef ::XSCRT::Type Base;

      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::SubcomponentPropertyReference, ACE_Null_Mutex> _ptr;

      // propertyName
      public:
      ::XMLSchema::string<ACE_TCHAR> const& propertyName () const;
      void propertyName (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef std::auto_ptr< ::XMLSchema::string<ACE_TCHAR> > propertyName_auto_ptr_type;
      propertyName_auto_ptr_type propertyName_;

      // instance
      public:
      ::DAnCE::Config_Handlers::IdRef const& instance () const;
      void instance (::DAnCE::Config_Handlers::IdRef const& );

      protected:
      typedef std::auto_ptr< ::DAnCE::Config_Handlers::IdRef > instance_auto_ptr_type;
      instance_auto_ptr_type instance_;

      public:
      SubcomponentPropertyReference (::XMLSchema::string<ACE_TCHAR> const& propertyName__,
                                     ::DAnCE::Config_Handlers::IdRef const& instance__);

      explicit SubcomponentPropertyReference (::XSCRT::XML::Element<ACE_TCHAR> const&);
      SubcomponentPropertyReference (SubcomponentPropertyReference const& s);
      SubcomponentPropertyReference& operator= (SubcomponentPropertyReference const& s);
    };


    class XSC_XML_Handlers_Export AssemblyPropertyMapping : public ::XSCRT::Type
    {
      typedef ::XSCRT::Type Base;

      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::AssemblyPropertyMapping, ACE_Null_Mutex> _ptr;

      // name
      public:
      ::XMLSchema::string<ACE_TCHAR> const& name () const;
      void name (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef std::auto_ptr< ::XMLSchema::string<ACE_TCHAR> > name_auto_ptr_type;
      name_auto_ptr_type name_;

      // externalName
      public:
      ::XMLSchema::string<ACE_TCHAR> const& externalName () const;
      void externalName (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef std::auto_ptr< ::XMLSchema::string<ACE_TCHAR> > externalName_auto_ptr_type;
      externalName_auto_ptr_type externalName_;

      // delegatesTo
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::SubcomponentPropertyReference, ACE_Null_Mutex> delegatesTo_value_type;
      typedef std::list<delegatesTo_value_type> delegatesTo_container_type;
      typedef delegatesTo_container_type::iterator delegatesTo_iterator;
      typedef delegatesTo_container_type::const_iterator delegatesTo_const_iterator;
      delegatesTo_iterator begin_delegatesTo ();
      delegatesTo_iterator end_delegatesTo ();
      delegatesTo_const_iterator begin_delegatesTo () const;
      delegatesTo_const_iterator end_delegatesTo () const;
      void add_delegatesTo (delegatesTo_value_type const&);
      size_t count_delegatesTo () const;

      protected:
      delegatesTo_container_type delegatesTo_;

      public:
      AssemblyPropertyMapping (::XMLSchema::string<ACE_TCHAR> const& name__,
                               ::XMLSchema::string<ACE_TCHAR> const& externalName__);

      explicit AssemblyPropertyMapping (::XSCRT::XML::Element<ACE_TCHAR> const&);
      AssemblyPropertyMapping (AssemblyPropertyMapping const& s);
      AssemblyPropertyMapping& operator= (AssemblyPropertyMapping const& s);
    };


    class XSC_XML_Handlers_Export LocalityKind : public ::XSCRT::Type
    {
      public:
      explicit LocalityKind (::XSCRT::XML::Element<ACE_TCHAR> const&);
      explicit LocalityKind (::XSCRT::XML::Attribute<ACE_TCHAR> const&);

      static LocalityKind const SameNodeAnyProcess;
      static LocalityKind const SameNodeSameProcess;
      static LocalityKind const SameNodeDifferentProcess;
      static LocalityKind const DifferentNode;
      static LocalityKind const DifferentProcess;
      static LocalityKind const NoConstraint;

      enum Value
      {
        SameNodeAnyProcess_l, SameNodeSameProcess_l, SameNodeDifferentProcess_l, DifferentNode_l, DifferentProcess_l, NoConstraint_l
      };


      Value
      integral () const;

      friend bool XSC_XML_Handlers_Export
      operator== (LocalityKind const& a, LocalityKind const& b);

      friend bool XSC_XML_Handlers_Export
      operator!= (LocalityKind const& a, LocalityKind const& b);

      private:
      LocalityKind (Value v);

      Value v_;
    };

    bool XSC_XML_Handlers_Export operator== (LocalityKind const &a, LocalityKind const &b);

    bool XSC_XML_Handlers_Export operator!= (LocalityKind const &a, LocalityKind const &b);


    class XSC_XML_Handlers_Export Locality : public ::XSCRT::Type
    {
      typedef ::XSCRT::Type Base;

      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Locality, ACE_Null_Mutex> _ptr;

      // constraint
      public:
      ::DAnCE::Config_Handlers::LocalityKind const& constraint () const;
      void constraint (::DAnCE::Config_Handlers::LocalityKind const& );

      protected:
      typedef std::auto_ptr< ::DAnCE::Config_Handlers::LocalityKind > constraint_auto_ptr_type;
      constraint_auto_ptr_type constraint_;

      // constrainedInstance
      public:
      ::DAnCE::Config_Handlers::IdRef const& constrainedInstance () const;
      void constrainedInstance (::DAnCE::Config_Handlers::IdRef const& );

      protected:
      typedef std::auto_ptr< ::DAnCE::Config_Handlers::IdRef > constrainedInstance_auto_ptr_type;
      constrainedInstance_auto_ptr_type constrainedInstance_;

      public:
      Locality (::DAnCE::Config_Handlers::LocalityKind const& constraint__,
                ::DAnCE::Config_Handlers::IdRef const& constrainedInstance__);

      explicit Locality (::XSCRT::XML::Element<ACE_TCHAR> const&);
      Locality (Locality const& s);
      Locality& operator= (Locality const& s);
    };


    class XSC_XML_Handlers_Export ComponentAssemblyDescription : public ::XSCRT::Type
    {
      typedef ::XSCRT::Type Base;

      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::ComponentAssemblyDescription, ACE_Null_Mutex> _ptr;

      // instance
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::SubcomponentInstantiationDescription, ACE_Null_Mutex> instance_value_type;
      typedef std::list<instance_value_type> instance_container_type;
      typedef instance_container_type::iterator instance_iterator;
      typedef instance_container_type::const_iterator instance_const_iterator;
      instance_iterator begin_instance ();
      instance_iterator end_instance ();
      instance_const_iterator begin_instance () const;
      instance_const_iterator end_instance () const;
      void add_instance (instance_value_type const&);
      size_t count_instance () const;

      protected:
      instance_container_type instance_;

      // connection
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::AssemblyConnectionDescription, ACE_Null_Mutex> connection_value_type;
      typedef std::list<connection_value_type> connection_container_type;
      typedef connection_container_type::iterator connection_iterator;
      typedef connection_container_type::const_iterator connection_const_iterator;
      connection_iterator begin_connection ();
      connection_iterator end_connection ();
      connection_const_iterator begin_connection () const;
      connection_const_iterator end_connection () const;
      void add_connection (connection_value_type const&);
      size_t count_connection () const;

      protected:
      connection_container_type connection_;

      // externalProperty
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::AssemblyPropertyMapping, ACE_Null_Mutex> externalProperty_value_type;
      typedef std::list<externalProperty_value_type> externalProperty_container_type;
      typedef externalProperty_container_type::iterator externalProperty_iterator;
      typedef externalProperty_container_type::const_iterator externalProperty_const_iterator;
      externalProperty_iterator begin_externalProperty ();
      externalProperty_iterator end_externalProperty ();
      externalProperty_const_iterator begin_externalProperty () const;
      externalProperty_const_iterator end_externalProperty () const;
      void add_externalProperty (externalProperty_value_type const&);
      size_t count_externalProperty () const;

      protected:
      externalProperty_container_type externalProperty_;

      // locality
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Locality, ACE_Null_Mutex> locality_value_type;
      typedef std::list<locality_value_type> locality_container_type;
      typedef locality_container_type::iterator locality_iterator;
      typedef locality_container_type::const_iterator locality_const_iterator;
      locality_iterator begin_locality ();
      locality_iterator end_locality ();
      locality_const_iterator begin_locality () const;
      locality_const_iterator end_locality () const;
      void add_locality (locality_value_type const&);
      size_t count_locality () const;

      protected:
      locality_container_type locality_;

      public:
      ComponentAssemblyDescription ();

      explicit ComponentAssemblyDescription (::XSCRT::XML::Element<ACE_TCHAR> const&);
      ComponentAssemblyDescription (ComponentAssemblyDescription const& s);
      ComponentAssemblyDescription& operator= (ComponentAssemblyDescription const& s);
    };


    class XSC_XML_Handlers_Export MonolithicImplementationDescription : public ::XSCRT::Type
    {
      typedef ::XSCRT::Type Base;

      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::MonolithicImplementationDescription, ACE_Null_Mutex> _ptr;

      // nodeExecParameter
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Property, ACE_Null_Mutex> nodeExecParameter_value_type;
      typedef std::list<nodeExecParameter_value_type> nodeExecParameter_container_type;
      typedef nodeExecParameter_container_type::iterator nodeExecParameter_iterator;
      typedef nodeExecParameter_container_type::const_iterator nodeExecParameter_const_iterator;
      nodeExecParameter_iterator begin_nodeExecParameter ();
      nodeExecParameter_iterator end_nodeExecParameter ();
      nodeExecParameter_const_iterator begin_nodeExecParameter () const;
      nodeExecParameter_const_iterator end_nodeExecParameter () const;
      void add_nodeExecParameter (nodeExecParameter_value_type const&);
      size_t count_nodeExecParameter () const;

      protected:
      nodeExecParameter_container_type nodeExecParameter_;

      // componentExecParameter
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Property, ACE_Null_Mutex> componentExecParameter_value_type;
      typedef std::list<componentExecParameter_value_type> componentExecParameter_container_type;
      typedef componentExecParameter_container_type::iterator componentExecParameter_iterator;
      typedef componentExecParameter_container_type::const_iterator componentExecParameter_const_iterator;
      componentExecParameter_iterator begin_componentExecParameter ();
      componentExecParameter_iterator end_componentExecParameter ();
      componentExecParameter_const_iterator begin_componentExecParameter () const;
      componentExecParameter_const_iterator end_componentExecParameter () const;
      void add_componentExecParameter (componentExecParameter_value_type const&);
      size_t count_componentExecParameter () const;

      protected:
      componentExecParameter_container_type componentExecParameter_;

      // deployRequirement
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::ImplementationRequirement, ACE_Null_Mutex> deployRequirement_value_type;
      typedef std::list<deployRequirement_value_type> deployRequirement_container_type;
      typedef deployRequirement_container_type::iterator deployRequirement_iterator;
      typedef deployRequirement_container_type::const_iterator deployRequirement_const_iterator;
      deployRequirement_iterator begin_deployRequirement ();
      deployRequirement_iterator end_deployRequirement ();
      deployRequirement_const_iterator begin_deployRequirement () const;
      deployRequirement_const_iterator end_deployRequirement () const;
      void add_deployRequirement (deployRequirement_value_type const&);
      size_t count_deployRequirement () const;

      protected:
      deployRequirement_container_type deployRequirement_;

      // primaryArtifact
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::NamedImplementationArtifact, ACE_Null_Mutex> primaryArtifact_value_type;
      typedef std::list<primaryArtifact_value_type> primaryArtifact_container_type;
      typedef primaryArtifact_container_type::iterator primaryArtifact_iterator;
      typedef primaryArtifact_container_type::const_iterator primaryArtifact_const_iterator;
      primaryArtifact_iterator begin_primaryArtifact ();
      primaryArtifact_iterator end_primaryArtifact ();
      primaryArtifact_const_iterator begin_primaryArtifact () const;
      primaryArtifact_const_iterator end_primaryArtifact () const;
      void add_primaryArtifact (primaryArtifact_value_type const&);
      size_t count_primaryArtifact () const;

      protected:
      primaryArtifact_container_type primaryArtifact_;

      public:
      MonolithicImplementationDescription ();

      explicit MonolithicImplementationDescription (::XSCRT::XML::Element<ACE_TCHAR> const&);
      MonolithicImplementationDescription (MonolithicImplementationDescription const& s);
      MonolithicImplementationDescription& operator= (MonolithicImplementationDescription const& s);
    };


    class XSC_XML_Handlers_Export ComponentImplementationDescription : public ::XSCRT::Type
    {
      typedef ::XSCRT::Type Base;

      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::ComponentImplementationDescription, ACE_Null_Mutex> _ptr;

      // label
      public:
      bool label_p () const;
      ::XMLSchema::string<ACE_TCHAR> const& label () const;
      void label (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef std::auto_ptr< ::XMLSchema::string<ACE_TCHAR> > label_auto_ptr_type;
      label_auto_ptr_type label_;

      // UUID
      public:
      bool UUID_p () const;
      ::XMLSchema::string<ACE_TCHAR> const& UUID () const;
      void UUID (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef std::auto_ptr< ::XMLSchema::string<ACE_TCHAR> > UUID_auto_ptr_type;
      UUID_auto_ptr_type UUID_;

      // implements
      public:
      bool implements_p () const;
      ::DAnCE::Config_Handlers::ComponentInterfaceDescription const& implements () const;
      void implements (::DAnCE::Config_Handlers::ComponentInterfaceDescription const& );

      protected:
      typedef std::auto_ptr< ::DAnCE::Config_Handlers::ComponentInterfaceDescription > implements_auto_ptr_type;
      implements_auto_ptr_type implements_;

      // assemblyImpl
      public:
      bool assemblyImpl_p () const;
      ::DAnCE::Config_Handlers::ComponentAssemblyDescription const& assemblyImpl () const;
      void assemblyImpl (::DAnCE::Config_Handlers::ComponentAssemblyDescription const& );

      protected:
      typedef std::auto_ptr< ::DAnCE::Config_Handlers::ComponentAssemblyDescription > assemblyImpl_auto_ptr_type;
      assemblyImpl_auto_ptr_type assemblyImpl_;

      // monolithicImpl
      public:
      bool monolithicImpl_p () const;
      ::DAnCE::Config_Handlers::MonolithicImplementationDescription const& monolithicImpl () const;
      void monolithicImpl (::DAnCE::Config_Handlers::MonolithicImplementationDescription const& );

      protected:
      typedef std::auto_ptr< ::DAnCE::Config_Handlers::MonolithicImplementationDescription > monolithicImpl_auto_ptr_type;
      monolithicImpl_auto_ptr_type monolithicImpl_;

      // configProperty
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Property, ACE_Null_Mutex> configProperty_value_type;
      typedef std::list<configProperty_value_type> configProperty_container_type;
      typedef configProperty_container_type::iterator configProperty_iterator;
      typedef configProperty_container_type::const_iterator configProperty_const_iterator;
      configProperty_iterator begin_configProperty ();
      configProperty_iterator end_configProperty ();
      configProperty_const_iterator begin_configProperty () const;
      configProperty_const_iterator end_configProperty () const;
      void add_configProperty (configProperty_value_type const&);
      size_t count_configProperty () const;

      protected:
      configProperty_container_type configProperty_;

      // capability
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Capability, ACE_Null_Mutex> capability_value_type;
      typedef std::list<capability_value_type> capability_container_type;
      typedef capability_container_type::iterator capability_iterator;
      typedef capability_container_type::const_iterator capability_const_iterator;
      capability_iterator begin_capability ();
      capability_iterator end_capability ();
      capability_const_iterator begin_capability () const;
      capability_const_iterator end_capability () const;
      void add_capability (capability_value_type const&);
      size_t count_capability () const;

      protected:
      capability_container_type capability_;

      // dependsOn
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::ImplementationDependency, ACE_Null_Mutex> dependsOn_value_type;
      typedef std::list<dependsOn_value_type> dependsOn_container_type;
      typedef dependsOn_container_type::iterator dependsOn_iterator;
      typedef dependsOn_container_type::const_iterator dependsOn_const_iterator;
      dependsOn_iterator begin_dependsOn ();
      dependsOn_iterator end_dependsOn ();
      dependsOn_const_iterator begin_dependsOn () const;
      dependsOn_const_iterator end_dependsOn () const;
      void add_dependsOn (dependsOn_value_type const&);
      size_t count_dependsOn () const;

      protected:
      dependsOn_container_type dependsOn_;

      // infoProperty
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Property, ACE_Null_Mutex> infoProperty_value_type;
      typedef std::list<infoProperty_value_type> infoProperty_container_type;
      typedef infoProperty_container_type::iterator infoProperty_iterator;
      typedef infoProperty_container_type::const_iterator infoProperty_const_iterator;
      infoProperty_iterator begin_infoProperty ();
      infoProperty_iterator end_infoProperty ();
      infoProperty_const_iterator begin_infoProperty () const;
      infoProperty_const_iterator end_infoProperty () const;
      void add_infoProperty (infoProperty_value_type const&);
      size_t count_infoProperty () const;

      protected:
      infoProperty_container_type infoProperty_;

      // href
      public:
      bool href_p () const;
      ::XMLSchema::string<ACE_TCHAR> const& href () const;
      ::XMLSchema::string<ACE_TCHAR>& href ();
      void href (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef std::auto_ptr< ::XMLSchema::string<ACE_TCHAR> > href_auto_ptr_type;
      href_auto_ptr_type href_;

      public:
      ComponentImplementationDescription ();

      explicit ComponentImplementationDescription (::XSCRT::XML::Element<ACE_TCHAR> const&);
      ComponentImplementationDescription (ComponentImplementationDescription const& s);
      ComponentImplementationDescription& operator= (ComponentImplementationDescription const& s);
    };


    class XSC_XML_Handlers_Export ConnectorImplementationDescription : public ::XSCRT::Type
    {
      typedef ::XSCRT::Type Base;

      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::ConnectorImplementationDescription, ACE_Null_Mutex> _ptr;

      // label
      public:
      bool label_p () const;
      ::XMLSchema::string<ACE_TCHAR> const& label () const;
      void label (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef std::auto_ptr< ::XMLSchema::string<ACE_TCHAR> > label_auto_ptr_type;
      label_auto_ptr_type label_;

      // UUID
      public:
      bool UUID_p () const;
      ::XMLSchema::string<ACE_TCHAR> const& UUID () const;
      void UUID (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef std::auto_ptr< ::XMLSchema::string<ACE_TCHAR> > UUID_auto_ptr_type;
      UUID_auto_ptr_type UUID_;

      // implements
      public:
      bool implements_p () const;
      ::DAnCE::Config_Handlers::ComponentInterfaceDescription const& implements () const;
      void implements (::DAnCE::Config_Handlers::ComponentInterfaceDescription const& );

      protected:
      typedef std::auto_ptr< ::DAnCE::Config_Handlers::ComponentInterfaceDescription > implements_auto_ptr_type;
      implements_auto_ptr_type implements_;

      // assemblyImpl
      public:
      bool assemblyImpl_p () const;
      ::DAnCE::Config_Handlers::ComponentAssemblyDescription const& assemblyImpl () const;
      void assemblyImpl (::DAnCE::Config_Handlers::ComponentAssemblyDescription const& );

      protected:
      typedef std::auto_ptr< ::DAnCE::Config_Handlers::ComponentAssemblyDescription > assemblyImpl_auto_ptr_type;
      assemblyImpl_auto_ptr_type assemblyImpl_;

      // monolithicImpl
      public:
      bool monolithicImpl_p () const;
      ::DAnCE::Config_Handlers::MonolithicImplementationDescription const& monolithicImpl () const;
      void monolithicImpl (::DAnCE::Config_Handlers::MonolithicImplementationDescription const& );

      protected:
      typedef std::auto_ptr< ::DAnCE::Config_Handlers::MonolithicImplementationDescription > monolithicImpl_auto_ptr_type;
      monolithicImpl_auto_ptr_type monolithicImpl_;

      // configProperty
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Property, ACE_Null_Mutex> configProperty_value_type;
      typedef std::list<configProperty_value_type> configProperty_container_type;
      typedef configProperty_container_type::iterator configProperty_iterator;
      typedef configProperty_container_type::const_iterator configProperty_const_iterator;
      configProperty_iterator begin_configProperty ();
      configProperty_iterator end_configProperty ();
      configProperty_const_iterator begin_configProperty () const;
      configProperty_const_iterator end_configProperty () const;
      void add_configProperty (configProperty_value_type const&);
      size_t count_configProperty () const;

      protected:
      configProperty_container_type configProperty_;

      // capability
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Capability, ACE_Null_Mutex> capability_value_type;
      typedef std::list<capability_value_type> capability_container_type;
      typedef capability_container_type::iterator capability_iterator;
      typedef capability_container_type::const_iterator capability_const_iterator;
      capability_iterator begin_capability ();
      capability_iterator end_capability ();
      capability_const_iterator begin_capability () const;
      capability_const_iterator end_capability () const;
      void add_capability (capability_value_type const&);
      size_t count_capability () const;

      protected:
      capability_container_type capability_;

      // dependsOn
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::ImplementationDependency, ACE_Null_Mutex> dependsOn_value_type;
      typedef std::list<dependsOn_value_type> dependsOn_container_type;
      typedef dependsOn_container_type::iterator dependsOn_iterator;
      typedef dependsOn_container_type::const_iterator dependsOn_const_iterator;
      dependsOn_iterator begin_dependsOn ();
      dependsOn_iterator end_dependsOn ();
      dependsOn_const_iterator begin_dependsOn () const;
      dependsOn_const_iterator end_dependsOn () const;
      void add_dependsOn (dependsOn_value_type const&);
      size_t count_dependsOn () const;

      protected:
      dependsOn_container_type dependsOn_;

      // infoProperty
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Property, ACE_Null_Mutex> infoProperty_value_type;
      typedef std::list<infoProperty_value_type> infoProperty_container_type;
      typedef infoProperty_container_type::iterator infoProperty_iterator;
      typedef infoProperty_container_type::const_iterator infoProperty_const_iterator;
      infoProperty_iterator begin_infoProperty ();
      infoProperty_iterator end_infoProperty ();
      infoProperty_const_iterator begin_infoProperty () const;
      infoProperty_const_iterator end_infoProperty () const;
      void add_infoProperty (infoProperty_value_type const&);
      size_t count_infoProperty () const;

      protected:
      infoProperty_container_type infoProperty_;

      // href
      public:
      bool href_p () const;
      ::XMLSchema::string<ACE_TCHAR> const& href () const;
      ::XMLSchema::string<ACE_TCHAR>& href ();
      void href (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef std::auto_ptr< ::XMLSchema::string<ACE_TCHAR> > href_auto_ptr_type;
      href_auto_ptr_type href_;

      public:
      ConnectorImplementationDescription ();

      explicit ConnectorImplementationDescription (::XSCRT::XML::Element<ACE_TCHAR> const&);
      ConnectorImplementationDescription (ConnectorImplementationDescription const& s);
      ConnectorImplementationDescription& operator= (ConnectorImplementationDescription const& s);
    };
  }
}

namespace DAnCE
{
  namespace Config_Handlers
  {
  }
}

#endif // CID_HPP
