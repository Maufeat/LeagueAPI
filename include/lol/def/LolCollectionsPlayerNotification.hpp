#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolCollectionsPlayerNotification { 
    bool critical;
    std::string type;
    std::string state;
    std::string backgroundUrl;
    uint64_t id;
    std::string source;
    std::string detailKey;
    std::string titleKey;
    std::map<std::string, std::string> data;
    std::string iconUrl; 
  };
  inline void to_json(json& j, const LolCollectionsPlayerNotification& v) {
    j["critical"] = v.critical; 
    j["type"] = v.type; 
    j["state"] = v.state; 
    j["backgroundUrl"] = v.backgroundUrl; 
    j["id"] = v.id; 
    j["source"] = v.source; 
    j["detailKey"] = v.detailKey; 
    j["titleKey"] = v.titleKey; 
    j["data"] = v.data; 
    j["iconUrl"] = v.iconUrl; 
  }
  inline void from_json(const json& j, LolCollectionsPlayerNotification& v) {
    v.critical = j.at("critical").get<bool>(); 
    v.type = j.at("type").get<std::string>(); 
    v.state = j.at("state").get<std::string>(); 
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.source = j.at("source").get<std::string>(); 
    v.detailKey = j.at("detailKey").get<std::string>(); 
    v.titleKey = j.at("titleKey").get<std::string>(); 
    v.data = j.at("data").get<std::map<std::string, std::string>>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
  }
}