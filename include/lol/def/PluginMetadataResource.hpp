#pragma once
#include "../base_def.hpp" 
#include "PluginThreadingModel.hpp"
namespace lol {
  struct PluginMetadataResource { 
    std::vector<std::string> globalAssetBundles;
    std::string feature;
    bool hasBundledAssets;
    std::string subtype;
    std::string app;
    std::string type;
    PluginThreadingModel threading;
    std::map<std::string, json> perLocaleAssetBundles;
    std::map<std::string, std::string> implements; 
  };
  inline void to_json(json& j, const PluginMetadataResource& v) {
    j["globalAssetBundles"] = v.globalAssetBundles; 
    j["feature"] = v.feature; 
    j["hasBundledAssets"] = v.hasBundledAssets; 
    j["subtype"] = v.subtype; 
    j["app"] = v.app; 
    j["type"] = v.type; 
    j["threading"] = v.threading; 
    j["perLocaleAssetBundles"] = v.perLocaleAssetBundles; 
    j["implements"] = v.implements; 
  }
  inline void from_json(const json& j, PluginMetadataResource& v) {
    v.globalAssetBundles = j.at("globalAssetBundles").get<std::vector<std::string>>(); 
    v.feature = j.at("feature").get<std::string>(); 
    v.hasBundledAssets = j.at("hasBundledAssets").get<bool>(); 
    v.subtype = j.at("subtype").get<std::string>(); 
    v.app = j.at("app").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.threading = j.at("threading").get<PluginThreadingModel>(); 
    v.perLocaleAssetBundles = j.at("perLocaleAssetBundles").get<std::map<std::string, json>>(); 
    v.implements = j.at("implements").get<std::map<std::string, std::string>>(); 
  }
}