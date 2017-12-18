#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PluginMetadataResource.hpp>
namespace lol {
  struct PluginDescriptionResource { 
    std::map<std::string, std::string> pluginDependencies;
    std::string version;
    std::string name;
    PluginMetadataResource riotMeta; 
  };
  inline void to_json(json& j, const PluginDescriptionResource& v) {
    j["pluginDependencies"] = v.pluginDependencies; 
    j["version"] = v.version; 
    j["name"] = v.name; 
    j["riotMeta"] = v.riotMeta; 
  }
  inline void from_json(const json& j, PluginDescriptionResource& v) {
    v.pluginDependencies = j.at("pluginDependencies").get<std::map<std::string, std::string>>(); 
    v.version = j.at("version").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.riotMeta = j.at("riotMeta").get<PluginMetadataResource>(); 
  }
}