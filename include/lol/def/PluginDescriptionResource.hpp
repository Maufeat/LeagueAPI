#pragma once
#include "../base_def.hpp" 
#include "PluginMetadataResource.hpp"
namespace lol {
  struct PluginDescriptionResource { 
    std::string name;
    std::string version;
    std::map<std::string, std::string> pluginDependencies;
    PluginMetadataResource riotMeta; 
  };
  inline void to_json(json& j, const PluginDescriptionResource& v) {
    j["name"] = v.name; 
    j["version"] = v.version; 
    j["pluginDependencies"] = v.pluginDependencies; 
    j["riotMeta"] = v.riotMeta; 
  }
  inline void from_json(const json& j, PluginDescriptionResource& v) {
    v.name = j.at("name").get<std::string>(); 
    v.version = j.at("version").get<std::string>(); 
    v.pluginDependencies = j.at("pluginDependencies").get<std::map<std::string, std::string>>(); 
    v.riotMeta = j.at("riotMeta").get<PluginMetadataResource>(); 
  }
}