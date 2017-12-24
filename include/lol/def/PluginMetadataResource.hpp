#pragma once
#include "../base_def.hpp" 
#include "PluginThreadingModel.hpp"
namespace lol {
  struct PluginMetadataResource { 
    PluginThreadingModel threading;
    std::map<std::string, json> perLocaleAssetBundles;
    std::string feature;
    std::vector<std::string> globalAssetBundles;
    bool hasBundledAssets;
    std::string subtype;
    std::map<std::string, std::string> implements;
    std::string type;
    std::string app; 
  };
  inline void to_json(json& j, const PluginMetadataResource& v) {
    j["threading"] = v.threading; 
    j["perLocaleAssetBundles"] = v.perLocaleAssetBundles; 
    j["feature"] = v.feature; 
    j["globalAssetBundles"] = v.globalAssetBundles; 
    j["hasBundledAssets"] = v.hasBundledAssets; 
    j["subtype"] = v.subtype; 
    j["implements"] = v.implements; 
    j["type"] = v.type; 
    j["app"] = v.app; 
  }
  inline void from_json(const json& j, PluginMetadataResource& v) {
    v.threading = j.at("threading").get<PluginThreadingModel>(); 
    v.perLocaleAssetBundles = j.at("perLocaleAssetBundles").get<std::map<std::string, json>>(); 
    v.feature = j.at("feature").get<std::string>(); 
    v.globalAssetBundles = j.at("globalAssetBundles").get<std::vector<std::string>>(); 
    v.hasBundledAssets = j.at("hasBundledAssets").get<bool>(); 
    v.subtype = j.at("subtype").get<std::string>(); 
    v.implements = j.at("implements").get<std::map<std::string, std::string>>(); 
    v.type = j.at("type").get<std::string>(); 
    v.app = j.at("app").get<std::string>(); 
  }
}