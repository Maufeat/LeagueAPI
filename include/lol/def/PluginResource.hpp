#pragma once
#include "../base_def.hpp" 
#include "PluginResourceContract.hpp"
namespace lol {
  struct PluginResource { 
    std::string dynLibFileName;
    std::string threadingModel;
    std::string feature;
    std::string subtype;
    std::string externalUri;
    int32_t orderDynamicLibraryLoaded;
    std::string app;
    std::vector<PluginResourceContract> implementedContracts;
    int32_t orderDynamicLibraryInited;
    std::vector<PluginResourceContract> dependencies;
    std::string dynLibPath;
    std::vector<std::string> assetBundleNames;
    std::string supertype;
    bool isDynamicLibraryLoaded;
    bool standalone;
    int32_t orderWADFileMounted;
    std::string shortName;
    std::string pluginInfoApiSemVer;
    std::string version;
    std::string fullName;
    std::map<std::string, std::string> mountedAssetBundles;
    bool isDynamicLibraryInited; 
  };
  inline void to_json(json& j, const PluginResource& v) {
    j["dynLibFileName"] = v.dynLibFileName; 
    j["threadingModel"] = v.threadingModel; 
    j["feature"] = v.feature; 
    j["subtype"] = v.subtype; 
    j["externalUri"] = v.externalUri; 
    j["orderDynamicLibraryLoaded"] = v.orderDynamicLibraryLoaded; 
    j["app"] = v.app; 
    j["implementedContracts"] = v.implementedContracts; 
    j["orderDynamicLibraryInited"] = v.orderDynamicLibraryInited; 
    j["dependencies"] = v.dependencies; 
    j["dynLibPath"] = v.dynLibPath; 
    j["assetBundleNames"] = v.assetBundleNames; 
    j["supertype"] = v.supertype; 
    j["isDynamicLibraryLoaded"] = v.isDynamicLibraryLoaded; 
    j["standalone"] = v.standalone; 
    j["orderWADFileMounted"] = v.orderWADFileMounted; 
    j["shortName"] = v.shortName; 
    j["pluginInfoApiSemVer"] = v.pluginInfoApiSemVer; 
    j["version"] = v.version; 
    j["fullName"] = v.fullName; 
    j["mountedAssetBundles"] = v.mountedAssetBundles; 
    j["isDynamicLibraryInited"] = v.isDynamicLibraryInited; 
  }
  inline void from_json(const json& j, PluginResource& v) {
    v.dynLibFileName = j.at("dynLibFileName").get<std::string>(); 
    v.threadingModel = j.at("threadingModel").get<std::string>(); 
    v.feature = j.at("feature").get<std::string>(); 
    v.subtype = j.at("subtype").get<std::string>(); 
    v.externalUri = j.at("externalUri").get<std::string>(); 
    v.orderDynamicLibraryLoaded = j.at("orderDynamicLibraryLoaded").get<int32_t>(); 
    v.app = j.at("app").get<std::string>(); 
    v.implementedContracts = j.at("implementedContracts").get<std::vector<PluginResourceContract>>(); 
    v.orderDynamicLibraryInited = j.at("orderDynamicLibraryInited").get<int32_t>(); 
    v.dependencies = j.at("dependencies").get<std::vector<PluginResourceContract>>(); 
    v.dynLibPath = j.at("dynLibPath").get<std::string>(); 
    v.assetBundleNames = j.at("assetBundleNames").get<std::vector<std::string>>(); 
    v.supertype = j.at("supertype").get<std::string>(); 
    v.isDynamicLibraryLoaded = j.at("isDynamicLibraryLoaded").get<bool>(); 
    v.standalone = j.at("standalone").get<bool>(); 
    v.orderWADFileMounted = j.at("orderWADFileMounted").get<int32_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.pluginInfoApiSemVer = j.at("pluginInfoApiSemVer").get<std::string>(); 
    v.version = j.at("version").get<std::string>(); 
    v.fullName = j.at("fullName").get<std::string>(); 
    v.mountedAssetBundles = j.at("mountedAssetBundles").get<std::map<std::string, std::string>>(); 
    v.isDynamicLibraryInited = j.at("isDynamicLibraryInited").get<bool>(); 
  }
}