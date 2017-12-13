#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PluginResourceContract.hpp>
namespace lol {
  struct PluginResource { 
    int32_t orderDynamicLibraryLoaded;
    std::string app;
    std::string shortName;
    std::string dynLibPath;
    std::string feature;
    std::string supertype;
    bool standalone;
    std::string threadingModel;
    std::string externalUri;
    std::string version;
    std::string fullName;
    std::vector<std::string> assetBundleNames;
    std::string subtype;
    int32_t orderWADFileMounted;
    std::map<std::string, std::string> mountedAssetBundles;
    std::string pluginInfoApiSemVer;
    bool isDynamicLibraryInited;
    std::string dynLibFileName;
    std::vector<PluginResourceContract> implementedContracts;
    std::vector<PluginResourceContract> dependencies;
    bool isDynamicLibraryLoaded;
    int32_t orderDynamicLibraryInited; 
  };
  void to_json(json& j, const PluginResource& v) {
  j["orderDynamicLibraryLoaded"] = v.orderDynamicLibraryLoaded; 
  j["app"] = v.app; 
  j["shortName"] = v.shortName; 
  j["dynLibPath"] = v.dynLibPath; 
  j["feature"] = v.feature; 
  j["supertype"] = v.supertype; 
  j["standalone"] = v.standalone; 
  j["threadingModel"] = v.threadingModel; 
  j["externalUri"] = v.externalUri; 
  j["version"] = v.version; 
  j["fullName"] = v.fullName; 
  j["assetBundleNames"] = v.assetBundleNames; 
  j["subtype"] = v.subtype; 
  j["orderWADFileMounted"] = v.orderWADFileMounted; 
  j["mountedAssetBundles"] = v.mountedAssetBundles; 
  j["pluginInfoApiSemVer"] = v.pluginInfoApiSemVer; 
  j["isDynamicLibraryInited"] = v.isDynamicLibraryInited; 
  j["dynLibFileName"] = v.dynLibFileName; 
  j["implementedContracts"] = v.implementedContracts; 
  j["dependencies"] = v.dependencies; 
  j["isDynamicLibraryLoaded"] = v.isDynamicLibraryLoaded; 
  j["orderDynamicLibraryInited"] = v.orderDynamicLibraryInited; 
  }
  void from_json(const json& j, PluginResource& v) {
  v.orderDynamicLibraryLoaded = j.at("orderDynamicLibraryLoaded").get<int32_t>(); 
  v.app = j.at("app").get<std::string>(); 
  v.shortName = j.at("shortName").get<std::string>(); 
  v.dynLibPath = j.at("dynLibPath").get<std::string>(); 
  v.feature = j.at("feature").get<std::string>(); 
  v.supertype = j.at("supertype").get<std::string>(); 
  v.standalone = j.at("standalone").get<bool>(); 
  v.threadingModel = j.at("threadingModel").get<std::string>(); 
  v.externalUri = j.at("externalUri").get<std::string>(); 
  v.version = j.at("version").get<std::string>(); 
  v.fullName = j.at("fullName").get<std::string>(); 
  v.assetBundleNames = j.at("assetBundleNames").get<std::vector<std::string>>(); 
  v.subtype = j.at("subtype").get<std::string>(); 
  v.orderWADFileMounted = j.at("orderWADFileMounted").get<int32_t>(); 
  v.mountedAssetBundles = j.at("mountedAssetBundles").get<std::map<std::string, std::string>>(); 
  v.pluginInfoApiSemVer = j.at("pluginInfoApiSemVer").get<std::string>(); 
  v.isDynamicLibraryInited = j.at("isDynamicLibraryInited").get<bool>(); 
  v.dynLibFileName = j.at("dynLibFileName").get<std::string>(); 
  v.implementedContracts = j.at("implementedContracts").get<std::vector<PluginResourceContract>>(); 
  v.dependencies = j.at("dependencies").get<std::vector<PluginResourceContract>>(); 
  v.isDynamicLibraryLoaded = j.at("isDynamicLibraryLoaded").get<bool>(); 
  v.orderDynamicLibraryInited = j.at("orderDynamicLibraryInited").get<int32_t>(); 
  }
}