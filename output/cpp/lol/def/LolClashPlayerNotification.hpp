#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClashPlayerNotification { 
    std::string iconUrl;
    bool dismissible;
    std::string source;
    std::string state;
    std::map<std::string, std::string> data;
    uint64_t id;
    std::string titleKey;
    std::string type;
    bool critical;
    std::string created;
    std::string detailKey;
    std::string expires;
    std::string backgroundUrl; 
  };
  void to_json(json& j, const LolClashPlayerNotification& v) {
    j["iconUrl"] = v.iconUrl; 
    j["dismissible"] = v.dismissible; 
    j["source"] = v.source; 
    j["state"] = v.state; 
    j["data"] = v.data; 
    j["id"] = v.id; 
    j["titleKey"] = v.titleKey; 
    j["type"] = v.type; 
    j["critical"] = v.critical; 
    j["created"] = v.created; 
    j["detailKey"] = v.detailKey; 
    j["expires"] = v.expires; 
    j["backgroundUrl"] = v.backgroundUrl; 
  }
  void from_json(const json& j, LolClashPlayerNotification& v) {
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.dismissible = j.at("dismissible").get<bool>(); 
    v.source = j.at("source").get<std::string>(); 
    v.state = j.at("state").get<std::string>(); 
    v.data = j.at("data").get<std::map<std::string, std::string>>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.titleKey = j.at("titleKey").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.critical = j.at("critical").get<bool>(); 
    v.created = j.at("created").get<std::string>(); 
    v.detailKey = j.at("detailKey").get<std::string>(); 
    v.expires = j.at("expires").get<std::string>(); 
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>(); 
  }
}