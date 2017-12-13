#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PluginThreadingModel.hpp>
namespace lol {
  struct PluginMetadataResource { 
    std::vector<std::string> globalAssetBundles;
    std::string type;
    std::map<std::string, std::string> implements;
    std::string feature;
    PluginThreadingModel threading;
    std::string subtype;
    bool hasBundledAssets;
    std::string app;
    std::map<std::string, json> perLocaleAssetBundles; 
  };
  void to_json(json& j, const PluginMetadataResource& v) {
  j["globalAssetBundles"] = v.globalAssetBundles; 
  j["type"] = v.type; 
  j["implements"] = v.implements; 
  j["feature"] = v.feature; 
  j["threading"] = v.threading; 
  j["subtype"] = v.subtype; 
  j["hasBundledAssets"] = v.hasBundledAssets; 
  j["app"] = v.app; 
  j["perLocaleAssetBundles"] = v.perLocaleAssetBundles; 
  }
  void from_json(const json& j, PluginMetadataResource& v) {
  v.globalAssetBundles = j.at("globalAssetBundles").get<std::vector<std::string>>(); 
  v.type = j.at("type").get<std::string>(); 
  v.implements = j.at("implements").get<std::map<std::string, std::string>>(); 
  v.feature = j.at("feature").get<std::string>(); 
  v.threading = j.at("threading").get<PluginThreadingModel>(); 
  v.subtype = j.at("subtype").get<std::string>(); 
  v.hasBundledAssets = j.at("hasBundledAssets").get<bool>(); 
  v.app = j.at("app").get<std::string>(); 
  v.perLocaleAssetBundles = j.at("perLocaleAssetBundles").get<std::map<std::string, json>>(); 
  }
}