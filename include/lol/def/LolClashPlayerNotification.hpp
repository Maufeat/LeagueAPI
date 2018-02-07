#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashPlayerNotification { 
    std::string source;
    std::string type;
    uint64_t id;
    std::string backgroundUrl;
    std::map<std::string, std::string> data;
    std::string state;
    std::string iconUrl;
    std::string titleKey;
    std::string detailKey;
    std::string created;
    std::string expires;
    bool critical;
    bool dismissible; 
  };
  inline void to_json(json& j, const LolClashPlayerNotification& v) {
    j["source"] = v.source; 
    j["type"] = v.type; 
    j["id"] = v.id; 
    j["backgroundUrl"] = v.backgroundUrl; 
    j["data"] = v.data; 
    j["state"] = v.state; 
    j["iconUrl"] = v.iconUrl; 
    j["titleKey"] = v.titleKey; 
    j["detailKey"] = v.detailKey; 
    j["created"] = v.created; 
    j["expires"] = v.expires; 
    j["critical"] = v.critical; 
    j["dismissible"] = v.dismissible; 
  }
  inline void from_json(const json& j, LolClashPlayerNotification& v) {
    v.source = j.at("source").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>(); 
    v.data = j.at("data").get<std::map<std::string, std::string>>(); 
    v.state = j.at("state").get<std::string>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.titleKey = j.at("titleKey").get<std::string>(); 
    v.detailKey = j.at("detailKey").get<std::string>(); 
    v.created = j.at("created").get<std::string>(); 
    v.expires = j.at("expires").get<std::string>(); 
    v.critical = j.at("critical").get<bool>(); 
    v.dismissible = j.at("dismissible").get<bool>(); 
  }
}