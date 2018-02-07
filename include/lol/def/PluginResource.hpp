#pragma once
#include "../base_def.hpp" 
#include "PluginResourceContract.hpp"
namespace lol {
  struct PluginResource { 
    std::string fullName;
    std::string shortName;
    std::string version;
    std::string supertype;
    std::string subtype;
    std::string app;
    std::string feature;
    std::string dynLibFileName;
    std::string dynLibPath;
    std::string pluginInfoApiSemVer;
    std::string threadingModel;
    bool isDynamicLibraryLoaded;
    bool isDynamicLibraryInited;
    bool standalone;
    std::string externalUri;
    std::vector<std::string> assetBundleNames;
    std::map<std::string, std::string> mountedAssetBundles;
    int32_t orderDynamicLibraryLoaded;
    int32_t orderDynamicLibraryInited;
    int32_t orderWADFileMounted;
    std::vector<PluginResourceContract> dependencies;
    std::vector<PluginResourceContract> implementedContracts; 
  };
  inline void to_json(json& j, const PluginResource& v) {
    j["fullName"] = v.fullName; 
    j["shortName"] = v.shortName; 
    j["version"] = v.version; 
    j["supertype"] = v.supertype; 
    j["subtype"] = v.subtype; 
    j["app"] = v.app; 
    j["feature"] = v.feature; 
    j["dynLibFileName"] = v.dynLibFileName; 
    j["dynLibPath"] = v.dynLibPath; 
    j["pluginInfoApiSemVer"] = v.pluginInfoApiSemVer; 
    j["threadingModel"] = v.threadingModel; 
    j["isDynamicLibraryLoaded"] = v.isDynamicLibraryLoaded; 
    j["isDynamicLibraryInited"] = v.isDynamicLibraryInited; 
    j["standalone"] = v.standalone; 
    j["externalUri"] = v.externalUri; 
    j["assetBundleNames"] = v.assetBundleNames; 
    j["mountedAssetBundles"] = v.mountedAssetBundles; 
    j["orderDynamicLibraryLoaded"] = v.orderDynamicLibraryLoaded; 
    j["orderDynamicLibraryInited"] = v.orderDynamicLibraryInited; 
    j["orderWADFileMounted"] = v.orderWADFileMounted; 
    j["dependencies"] = v.dependencies; 
    j["implementedContracts"] = v.implementedContracts; 
  }
  inline void from_json(const json& j, PluginResource& v) {
    v.fullName = j.at("fullName").get<std::string>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.version = j.at("version").get<std::string>(); 
    v.supertype = j.at("supertype").get<std::string>(); 
    v.subtype = j.at("subtype").get<std::string>(); 
    v.app = j.at("app").get<std::string>(); 
    v.feature = j.at("feature").get<std::string>(); 
    v.dynLibFileName = j.at("dynLibFileName").get<std::string>(); 
    v.dynLibPath = j.at("dynLibPath").get<std::string>(); 
    v.pluginInfoApiSemVer = j.at("pluginInfoApiSemVer").get<std::string>(); 
    v.threadingModel = j.at("threadingModel").get<std::string>(); 
    v.isDynamicLibraryLoaded = j.at("isDynamicLibraryLoaded").get<bool>(); 
    v.isDynamicLibraryInited = j.at("isDynamicLibraryInited").get<bool>(); 
    v.standalone = j.at("standalone").get<bool>(); 
    v.externalUri = j.at("externalUri").get<std::string>(); 
    v.assetBundleNames = j.at("assetBundleNames").get<std::vector<std::string>>(); 
    v.mountedAssetBundles = j.at("mountedAssetBundles").get<std::map<std::string, std::string>>(); 
    v.orderDynamicLibraryLoaded = j.at("orderDynamicLibraryLoaded").get<int32_t>(); 
    v.orderDynamicLibraryInited = j.at("orderDynamicLibraryInited").get<int32_t>(); 
    v.orderWADFileMounted = j.at("orderWADFileMounted").get<int32_t>(); 
    v.dependencies = j.at("dependencies").get<std::vector<PluginResourceContract>>(); 
    v.implementedContracts = j.at("implementedContracts").get<std::vector<PluginResourceContract>>(); 
  }
}