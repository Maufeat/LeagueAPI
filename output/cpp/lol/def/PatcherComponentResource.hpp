#pragma once
#include "../base_def.hpp" 
#include "PatcherHeaderEntry.hpp"
#include "PatcherComponentResourceType.hpp"
#include "PatcherComponentResourceHistory.hpp"
namespace lol {
  struct PatcherComponentResource { 
    std::string install_dir;
    PatcherComponentResourceType type;
    std::string locale;
    bool copy_to_solution;
    std::vector<PatcherHeaderEntry> headers;
    bool use_tls;
    PatcherComponentResourceHistory history;
    std::string hostname;
    std::string remote_path;
    std::string region;
    std::string id; 
  };
  inline void to_json(json& j, const PatcherComponentResource& v) {
    j["install_dir"] = v.install_dir; 
    j["type"] = v.type; 
    j["locale"] = v.locale; 
    j["copy_to_solution"] = v.copy_to_solution; 
    j["headers"] = v.headers; 
    j["use_tls"] = v.use_tls; 
    j["history"] = v.history; 
    j["hostname"] = v.hostname; 
    j["remote_path"] = v.remote_path; 
    j["region"] = v.region; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, PatcherComponentResource& v) {
    v.install_dir = j.at("install_dir").get<std::string>(); 
    v.type = j.at("type").get<PatcherComponentResourceType>(); 
    v.locale = j.at("locale").get<std::string>(); 
    v.copy_to_solution = j.at("copy_to_solution").get<bool>(); 
    v.headers = j.at("headers").get<std::vector<PatcherHeaderEntry>>(); 
    v.use_tls = j.at("use_tls").get<bool>(); 
    v.history = j.at("history").get<PatcherComponentResourceHistory>(); 
    v.hostname = j.at("hostname").get<std::string>(); 
    v.remote_path = j.at("remote_path").get<std::string>(); 
    v.region = j.at("region").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}