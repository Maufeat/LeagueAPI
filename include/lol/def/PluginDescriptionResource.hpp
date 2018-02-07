#pragma once
#include "../base_def.hpp" 
#include "PluginMetadataResource.hpp"
namespace lol {
  struct PluginDescriptionResource { 
    std::string name;
    std::string version;
    PluginMetadataResource riotMeta;
    std::map<std::string, std::string> pluginDependencies; 
  };
  inline void to_json(json& j, const PluginDescriptionResource& v) {
    j["name"] = v.name; 
    j["version"] = v.version; 
    j["riotMeta"] = v.riotMeta; 
    j["pluginDependencies"] = v.pluginDependencies; 
  }
  inline void from_json(const json& j, PluginDescriptionResource& v) {
    v.name = j.at("name").get<std::string>(); 
    v.version = j.at("version").get<std::string>(); 
    v.riotMeta = j.at("riotMeta").get<PluginMetadataResource>(); 
    v.pluginDependencies = j.at("pluginDependencies").get<std::map<std::string, std::string>>(); 
  }
}