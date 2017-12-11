#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/PluginThreadingModel.hpp>

namespace leagueapi {
  struct PluginMetadataResource { /**/ 
    PluginThreadingModel threading;/**/
    bool hasBundledAssets;/**/
    std::map<std::string, json> perLocaleAssetBundles;/**/
    std::string subtype;/**/
    std::map<std::string, std::string> implements;/**/
    std::string type;/**/
    std::string app;/**/
    std::string feature;/**/
    std::vector<std::string> globalAssetBundles;/**/
  };
  static void to_json(json& j, const PluginMetadataResource& v) { 
    j["threading"] = v.threading;
    j["hasBundledAssets"] = v.hasBundledAssets;
    j["perLocaleAssetBundles"] = v.perLocaleAssetBundles;
    j["subtype"] = v.subtype;
    j["implements"] = v.implements;
    j["type"] = v.type;
    j["app"] = v.app;
    j["feature"] = v.feature;
    j["globalAssetBundles"] = v.globalAssetBundles;
  }
  static void from_json(const json& j, PluginMetadataResource& v) { 
    v.threading = j.at("threading").get<PluginThreadingModel>(); 
    v.hasBundledAssets = j.at("hasBundledAssets").get<bool>(); 
    v.perLocaleAssetBundles = j.at("perLocaleAssetBundles").get<std::map<std::string, json>>(); 
    v.subtype = j.at("subtype").get<std::string>(); 
    v.implements = j.at("implements").get<std::map<std::string, std::string>>(); 
    v.type = j.at("type").get<std::string>(); 
    v.app = j.at("app").get<std::string>(); 
    v.feature = j.at("feature").get<std::string>(); 
    v.globalAssetBundles = j.at("globalAssetBundles").get<std::vector<std::string>>(); 
  }
} 