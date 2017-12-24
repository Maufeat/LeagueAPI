#pragma once
#include "../base_def.hpp" 
#include "PluginMetadataResource.hpp"
namespace lol {
  struct PluginDescriptionResource { 
    std::map<std::string, std::string> pluginDependencies;
    std::string version;
    PluginMetadataResource riotMeta;
    std::string name; 
  };
  inline void to_json(json& j, const PluginDescriptionResource& v) {
    j["pluginDependencies"] = v.pluginDependencies; 
    j["version"] = v.version; 
    j["riotMeta"] = v.riotMeta; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, PluginDescriptionResource& v) {
    v.pluginDependencies = j.at("pluginDependencies").get<std::map<std::string, std::string>>(); 
    v.version = j.at("version").get<std::string>(); 
    v.riotMeta = j.at("riotMeta").get<PluginMetadataResource>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}