// Vote counts for each party
let votes = {
    BJP: 0,
    CONGRESS: 0,
    TDP: 0,
    JSP: 0,
    NOTA: 0
};

// Function to cast a vote
function castVote(party) {
    votes[party]++;
    alert(`✅ Thanks for voting for ${party}!`);
}

// Function to display vote count
function showResults() {
    let result = `<h3>Vote Counts:</h3>`;
    for (let party in votes) {
        result += `<strong>${party}</strong>: ${votes[party]} votes<br>`;
    }
    document.getElementById('vote-count').innerHTML = result;
}

// Function to display the leading party
function showLeadingParty() {
    let leadingParty = '';
    let maxVotes = 0;

    for (let party in votes) {
        if (votes[party] > maxVotes) {
            maxVotes = votes[party];
            leadingParty = party;
        }
    }

    document.getElementById('leading-party').innerHTML = 
        `<h3>🏆 Leading Party: ${leadingParty} with ${maxVotes} votes!</h3>`;
}
