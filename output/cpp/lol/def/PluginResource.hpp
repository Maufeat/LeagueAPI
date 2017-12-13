#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PluginResourceContract.hpp>
namespace lol {
  struct PluginResource { 
    std::string shortName;
    int32_t orderDynamicLibraryLoaded;
    std::string supertype;
    std::string dynLibPath;
    bool standalone;
    std::string app;
    std::string fullName;
    int32_t orderWADFileMounted;
    std::string externalUri;
    std::string pluginInfoApiSemVer;
    std::vector<std::string> assetBundleNames;
    std::string version;
    std::string feature;
    std::map<std::string, std::string> mountedAssetBundles;
    bool isDynamicLibraryLoaded;
    std::vector<PluginResourceContract> dependencies;
    std::string subtype;
    std::string threadingModel;
    std::vector<PluginResourceContract> implementedContracts;
    std::string dynLibFileName;
    int32_t orderDynamicLibraryInited;
    bool isDynamicLibraryInited; 
  };
  void to_json(json& j, const PluginResource& v) {
  j["shortName"] = v.shortName; 
  j["orderDynamicLibraryLoaded"] = v.orderDynamicLibraryLoaded; 
  j["supertype"] = v.supertype; 
  j["dynLibPath"] = v.dynLibPath; 
  j["standalone"] = v.standalone; 
  j["app"] = v.app; 
  j["fullName"] = v.fullName; 
  j["orderWADFileMounted"] = v.orderWADFileMounted; 
  j["externalUri"] = v.externalUri; 
  j["pluginInfoApiSemVer"] = v.pluginInfoApiSemVer; 
  j["assetBundleNames"] = v.assetBundleNames; 
  j["version"] = v.version; 
  j["feature"] = v.feature; 
  j["mountedAssetBundles"] = v.mountedAssetBundles; 
  j["isDynamicLibraryLoaded"] = v.isDynamicLibraryLoaded; 
  j["dependencies"] = v.dependencies; 
  j["subtype"] = v.subtype; 
  j["threadingModel"] = v.threadingModel; 
  j["implementedContracts"] = v.implementedContracts; 
  j["dynLibFileName"] = v.dynLibFileName; 
  j["orderDynamicLibraryInited"] = v.orderDynamicLibraryInited; 
  j["isDynamicLibraryInited"] = v.isDynamicLibraryInited; 
  }
  void from_json(const json& j, PluginResource& v) {
  v.shortName = j.at("shortName").get<std::string>(); 
  v.orderDynamicLibraryLoaded = j.at("orderDynamicLibraryLoaded").get<int32_t>(); 
  v.supertype = j.at("supertype").get<std::string>(); 
  v.dynLibPath = j.at("dynLibPath").get<std::string>(); 
  v.standalone = j.at("standalone").get<bool>(); 
  v.app = j.at("app").get<std::string>(); 
  v.fullName = j.at("fullName").get<std::string>(); 
  v.orderWADFileMounted = j.at("orderWADFileMounted").get<int32_t>(); 
  v.externalUri = j.at("externalUri").get<std::string>(); 
  v.pluginInfoApiSemVer = j.at("pluginInfoApiSemVer").get<std::string>(); 
  v.assetBundleNames = j.at("assetBundleNames").get<std::vector<std::string>>(); 
  v.version = j.at("version").get<std::string>(); 
  v.feature = j.at("feature").get<std::string>(); 
  v.mountedAssetBundles = j.at("mountedAssetBundles").get<std::map<std::string, std::string>>(); 
  v.isDynamicLibraryLoaded = j.at("isDynamicLibraryLoaded").get<bool>(); 
  v.dependencies = j.at("dependencies").get<std::vector<PluginResourceContract>>(); 
  v.subtype = j.at("subtype").get<std::string>(); 
  v.threadingModel = j.at("threadingModel").get<std::string>(); 
  v.implementedContracts = j.at("implementedContracts").get<std::vector<PluginResourceContract>>(); 
  v.dynLibFileName = j.at("dynLibFileName").get<std::string>(); 
  v.orderDynamicLibraryInited = j.at("orderDynamicLibraryInited").get<int32_t>(); 
  v.isDynamicLibraryInited = j.at("isDynamicLibraryInited").get<bool>(); 
  }
}