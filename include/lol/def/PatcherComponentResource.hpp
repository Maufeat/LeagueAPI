#pragma once
#include "../base_def.hpp" 
#include "PatcherComponentResourceType.hpp"
#include "PatcherHeaderEntry.hpp"
#include "PatcherComponentResourceHistory.hpp"
namespace lol {
  struct PatcherComponentResource { 
    std::string remote_path;
    std::vector<PatcherHeaderEntry> headers;
    bool copy_to_solution;
    std::string install_dir;
    std::string id;
    std::string region;
    bool use_tls;
    PatcherComponentResourceType type;
    std::string hostname;
    PatcherComponentResourceHistory history;
    std::string locale; 
  };
  inline void to_json(json& j, const PatcherComponentResource& v) {
    j["remote_path"] = v.remote_path; 
    j["headers"] = v.headers; 
    j["copy_to_solution"] = v.copy_to_solution; 
    j["install_dir"] = v.install_dir; 
    j["id"] = v.id; 
    j["region"] = v.region; 
    j["use_tls"] = v.use_tls; 
    j["type"] = v.type; 
    j["hostname"] = v.hostname; 
    j["history"] = v.history; 
    j["locale"] = v.locale; 
  }
  inline void from_json(const json& j, PatcherComponentResource& v) {
    v.remote_path = j.at("remote_path").get<std::string>(); 
    v.headers = j.at("headers").get<std::vector<PatcherHeaderEntry>>(); 
    v.copy_to_solution = j.at("copy_to_solution").get<bool>(); 
    v.install_dir = j.at("install_dir").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.region = j.at("region").get<std::string>(); 
    v.use_tls = j.at("use_tls").get<bool>(); 
    v.type = j.at("type").get<PatcherComponentResourceType>(); 
    v.hostname = j.at("hostname").get<std::string>(); 
    v.history = j.at("history").get<PatcherComponentResourceHistory>(); 
    v.locale = j.at("locale").get<std::string>(); 
  }
}