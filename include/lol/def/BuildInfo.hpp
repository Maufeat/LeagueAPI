#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BuildInfo { 
    std::string version;
    std::string patchlineVisibleName;
    int32_t codeBuildId;
    std::string patchline;
    std::string branchFull;
    int32_t gameDataBuildId;
    std::string gameBranchFull;
    int32_t contentBuildId;
    std::string branch;
    std::string gameBranch; 
  };
  inline void to_json(json& j, const BuildInfo& v) {
    j["version"] = v.version; 
    j["patchlineVisibleName"] = v.patchlineVisibleName; 
    j["codeBuildId"] = v.codeBuildId; 
    j["patchline"] = v.patchline; 
    j["branchFull"] = v.branchFull; 
    j["gameDataBuildId"] = v.gameDataBuildId; 
    j["gameBranchFull"] = v.gameBranchFull; 
    j["contentBuildId"] = v.contentBuildId; 
    j["branch"] = v.branch; 
    j["gameBranch"] = v.gameBranch; 
  }
  inline void from_json(const json& j, BuildInfo& v) {
    v.version = j.at("version").get<std::string>(); 
    v.patchlineVisibleName = j.at("patchlineVisibleName").get<std::string>(); 
    v.codeBuildId = j.at("codeBuildId").get<int32_t>(); 
    v.patchline = j.at("patchline").get<std::string>(); 
    v.branchFull = j.at("branchFull").get<std::string>(); 
    v.gameDataBuildId = j.at("gameDataBuildId").get<int32_t>(); 
    v.gameBranchFull = j.at("gameBranchFull").get<std::string>(); 
    v.contentBuildId = j.at("contentBuildId").get<int32_t>(); 
    v.branch = j.at("branch").get<std::string>(); 
    v.gameBranch = j.at("gameBranch").get<std::string>(); 
  }
}