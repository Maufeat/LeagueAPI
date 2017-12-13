#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEsportStreamNotificationsESportsAPI_streamgroups { 
    bool live;
    std::string title;
    std::string content;
    int64_t id;
    std::string slug; 
  };
  void to_json(json& j, const LolEsportStreamNotificationsESportsAPI_streamgroups& v) {
  j["live"] = v.live; 
  j["title"] = v.title; 
  j["content"] = v.content; 
  j["id"] = v.id; 
  j["slug"] = v.slug; 
  }
  void from_json(const json& j, LolEsportStreamNotificationsESportsAPI_streamgroups& v) {
  v.live = j.at("live").get<bool>(); 
  v.title = j.at("title").get<std::string>(); 
  v.content = j.at("content").get<std::string>(); 
  v.id = j.at("id").get<int64_t>(); 
  v.slug = j.at("slug").get<std::string>(); 
  }
}