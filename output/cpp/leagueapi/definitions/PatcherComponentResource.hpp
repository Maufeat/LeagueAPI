#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/PatcherHeaderEntry.hpp>
#include <leagueapi/definitions/PatcherComponentResourceType.hpp>
#include <leagueapi/definitions/PatcherComponentResourceHistory.hpp>

namespace leagueapi {
  struct PatcherComponentResource { /**/ 
    PatcherComponentResourceHistory history;/**/
    std::string locale;/**/
    std::string install_dir;/**/
    std::string id;/**/
    bool copy_to_solution;/**/
    PatcherComponentResourceType type;/**/
    std::string region;/**/
    std::vector<PatcherHeaderEntry> headers;/**/
    std::string hostname;/**/
    bool use_tls;/**/
    std::string remote_path;/**/
  };
  static void to_json(json& j, const PatcherComponentResource& v) { 
    j["history"] = v.history;
    j["locale"] = v.locale;
    j["install_dir"] = v.install_dir;
    j["id"] = v.id;
    j["copy_to_solution"] = v.copy_to_solution;
    j["type"] = v.type;
    j["region"] = v.region;
    j["headers"] = v.headers;
    j["hostname"] = v.hostname;
    j["use_tls"] = v.use_tls;
    j["remote_path"] = v.remote_path;
  }
  static void from_json(const json& j, PatcherComponentResource& v) { 
    v.history = j.at("history").get<PatcherComponentResourceHistory>(); 
    v.locale = j.at("locale").get<std::string>(); 
    v.install_dir = j.at("install_dir").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.copy_to_solution = j.at("copy_to_solution").get<bool>(); 
    v.type = j.at("type").get<PatcherComponentResourceType>(); 
    v.region = j.at("region").get<std::string>(); 
    v.headers = j.at("headers").get<std::vector<PatcherHeaderEntry>>(); 
    v.hostname = j.at("hostname").get<std::string>(); 
    v.use_tls = j.at("use_tls").get<bool>(); 
    v.remote_path = j.at("remote_path").get<std::string>(); 
  }
} 