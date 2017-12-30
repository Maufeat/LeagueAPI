#pragma once
#include "../base_def.hpp" 
#include "PluginResourceContract.hpp"
namespace lol {
  struct PluginResource { 
    std::vector<std::string> assetBundleNames;
    std::string dynLibPath;
    std::string shortName;
    std::string feature;
    std::vector<PluginResourceContract> implementedContracts;
    std::string pluginInfoApiSemVer;
    std::string threadingModel;
    int32_t orderWADFileMounted;
    std::map<std::string, std::string> mountedAssetBundles;
    std::string externalUri;
    std::string version;
    std::string fullName;
    int32_t orderDynamicLibraryInited;
    std::string dynLibFileName;
    bool isDynamicLibraryLoaded;
    std::string subtype;
    std::vector<PluginResourceContract> dependencies;
    bool standalone;
    std::string app;
    std::string supertype;
    int32_t orderDynamicLibraryLoaded;
    bool isDynamicLibraryInited; 
  };
  inline void to_json(json& j, const PluginResource& v) {
    j["assetBundleNames"] = v.assetBundleNames; 
    j["dynLibPath"] = v.dynLibPath; 
    j["shortName"] = v.shortName; 
    j["feature"] = v.feature; 
    j["implementedContracts"] = v.implementedContracts; 
    j["pluginInfoApiSemVer"] = v.pluginInfoApiSemVer; 
    j["threadingModel"] = v.threadingModel; 
    j["orderWADFileMounted"] = v.orderWADFileMounted; 
    j["mountedAssetBundles"] = v.mountedAssetBundles; 
    j["externalUri"] = v.externalUri; 
    j["version"] = v.version; 
    j["fullName"] = v.fullName; 
    j["orderDynamicLibraryInited"] = v.orderDynamicLibraryInited; 
    j["dynLibFileName"] = v.dynLibFileName; 
    j["isDynamicLibraryLoaded"] = v.isDynamicLibraryLoaded; 
    j["subtype"] = v.subtype; 
    j["dependencies"] = v.dependencies; 
    j["standalone"] = v.standalone; 
    j["app"] = v.app; 
    j["supertype"] = v.supertype; 
    j["orderDynamicLibraryLoaded"] = v.orderDynamicLibraryLoaded; 
    j["isDynamicLibraryInited"] = v.isDynamicLibraryInited; 
  }
  inline void from_json(const json& j, PluginResource& v) {
    v.assetBundleNames = j.at("assetBundleNames").get<std::vector<std::string>>(); 
    v.dynLibPath = j.at("dynLibPath").get<std::string>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.feature = j.at("feature").get<std::string>(); 
    v.implementedContracts = j.at("implementedContracts").get<std::vector<PluginResourceContract>>(); 
    v.pluginInfoApiSemVer = j.at("pluginInfoApiSemVer").get<std::string>(); 
    v.threadingModel = j.at("threadingModel").get<std::string>(); 
    v.orderWADFileMounted = j.at("orderWADFileMounted").get<int32_t>(); 
    v.mountedAssetBundles = j.at("mountedAssetBundles").get<std::map<std::string, std::string>>(); 
    v.externalUri = j.at("externalUri").get<std::string>(); 
    v.version = j.at("version").get<std::string>(); 
    v.fullName = j.at("fullName").get<std::string>(); 
    v.orderDynamicLibraryInited = j.at("orderDynamicLibraryInited").get<int32_t>(); 
    v.dynLibFileName = j.at("dynLibFileName").get<std::string>(); 
    v.isDynamicLibraryLoaded = j.at("isDynamicLibraryLoaded").get<bool>(); 
    v.subtype = j.at("subtype").get<std::string>(); 
    v.dependencies = j.at("dependencies").get<std::vector<PluginResourceContract>>(); 
    v.standalone = j.at("standalone").get<bool>(); 
    v.app = j.at("app").get<std::string>(); 
    v.supertype = j.at("supertype").get<std::string>(); 
    v.orderDynamicLibraryLoaded = j.at("orderDynamicLibraryLoaded").get<int32_t>(); 
    v.isDynamicLibraryInited = j.at("isDynamicLibraryInited").get<bool>(); 
  }
}